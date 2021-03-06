#define __STDC__ 1
#include "ntddk.h"
#include "ntimage.h"

/***********************************************************************/
/* shell code start */
/* linker command must append /MERGE:S_CODE=S_DATA /SECTION:S_DATA,RWE */
/***********************************************************************/
void GetRing3Base_m();
/*shellcode Global DATA*/

#pragma data_seg("S_DATA")

__int64    shell_data_sign_S=0;//sign data 
__int64     k_Base=0;
__int64     n_Base=0;
__int64    shell_data_sign_E=0; //sign data

#pragma code_seg("S_CODE")

/*shlleocde entry*/
int shell_start(__int64* pf,char** pfn,__int64 pfmax)	// sign code start
{
	__int64 i;
	GetRing3Base_m();
	for (i=0;i<pfmax;i++)
	{
		GetProcAddress_m(n_Base,pfn[i],&pf[i]);
	}
	
	return i;
}

int strlen_m(char* s)
{
  int i=0;
  for(;s[i++];);
  return i;
}

int strcmp_m(char* s1,char* s2)
{
  int t,ta,tb;
  t|=-1;
  ta=strlen_m(s1);
  tb=strlen_m(s2);
  if (ta==tb)
  {
    t=ta;
    do
    {
      --t;
    }while (t>=0 && s1[t]==s2[t]);
    t++;
  }
  return t; 
}

/*get kernel32 and ntdll base*/
void GetRing3Base_m()
{
 __int64 p; 
   p=*(__int64*)(*(__int64*)(*(__int64 *)(__readgsqword(0x30)+0x60)+0x18)+0x30);
   n_Base=*(__int64*)(p+0x10);
   k_Base=*(__int64*)(*(__int64*)(*(__int64*)p)+0x10);
}
int GetProcAddress_m(__int64 base,char* FuncName,__int64* FuncAddr)
{
  __int64 addr=0;
  __int32* AddressOfNames;
  __int32* AddressOfFunctions;
  __int16* AddressOfNameOrdinals;
  IMAGE_DOS_HEADER*         DOS_HEADER;
  IMAGE_NT_HEADERS64*       NT_HEADER;
  IMAGE_OPTIONAL_HEADER64*  OptionalHeader;
  IMAGE_EXPORT_DIRECTORY*   Export;
  int i,n,t;
  char* Dst;
  char* Src;
  
  if (!base || !FuncName) goto done;
  DOS_HEADER=(IMAGE_DOS_HEADER*)(__int64)base;
  if (DOS_HEADER->e_magic!='ZM') goto done;
  
  NT_HEADER = (IMAGE_NT_HEADERS64*)((__int64)DOS_HEADER +(__int64)DOS_HEADER->e_lfanew);
  
  if (NT_HEADER->Signature!='EP') goto done;
  
  OptionalHeader=&NT_HEADER->OptionalHeader;
  
  if (OptionalHeader->Magic!=0x20B) goto done;//pe 64
  
  Export = (IMAGE_EXPORT_DIRECTORY*)(\
            (__int64)DOS_HEADER + \
            (__int64)(OptionalHeader->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress)\
            );
  t=Export->NumberOfNames;
  AddressOfNameOrdinals =(__int16*)((__int64)DOS_HEADER + (__int64)Export->AddressOfNameOrdinals);
  AddressOfNames        =(__int32*)((__int64)DOS_HEADER + (__int64)Export->AddressOfNames);
  AddressOfFunctions    =(__int32*)((__int64)DOS_HEADER + (__int64)Export->AddressOfFunctions);
  Src=FuncName;
  for (i=0;i<t;i++)
  {
    Dst=(char*)((__int64)DOS_HEADER + AddressOfNames[i]);
    if (Dst[0]==Src[0]&& strcmp_m(Src,Dst)==0)
    {
      n=AddressOfNameOrdinals[i];
      addr=(__int64)DOS_HEADER+AddressOfFunctions[n];
      goto done;
    }
  }
done:
  *FuncAddr=addr;
  return (addr?1:0);
}


#pragma code_seg()
#pragma data_seg()

#include "..\beaengine\headers\BeaEngine.h"

struct FILE* __cdecl fopen();

main() 
{ 
	DISASM diasm={0};
	struct FILE* file=fopen("shellcode.h","wt+");
	__int64 i,j,k;
	
	printf("shellcode start %llx \nend %llx \ndata start %llx \nlength = %d\n",\
			&shell_start,\
			&shell_data_sign_S,\
			&shell_data_sign_E,\
			(__int64)&shell_data_sign_S-(__int64)&shell_start);
	
	fprintf(file,"unsigned char shellcode[] = {\n");
	for (diasm.Archi=64,k=(__int64)&shell_start;k < (__int64)&shell_data_sign_S;k+=j)
	{
		diasm.EIP=k;
		j=Disasm(&diasm);
		fprintf(file,"\t\t");
		for (i=0;i<j;i++) fprintf(file,"0x%.2X,",*(unsigned char*)(k+i));
		fprintf(file,"% *s\t// %s\n",max(50-j*5,0),"",&diasm.CompleteInstr);
	}
	
	for (j=8,k=(__int64)&shell_data_sign_S;k<(__int64)&shell_data_sign_E;k+=j)
	{
		fprintf(file,"\t\t");
		for (i=0;i<j;i++) fprintf(file,"0x%.2X,",*(unsigned char*)(k+i));
		fprintf(file,"\n");
	}
	fprintf(file,"\t\t0\n};\n");
	
	fprintf(file,"#define wow64GetProcAddress_m &shellcode[0x%lx]\n",(char*)&GetProcAddress_m - (char*)&shell_start);
	fprintf(file,"#define wow64GetRing3Base_m   &shellcode[0x%lx]\n",(char*)&GetRing3Base_m - (char*)&shell_start);
	fprintf(file,"#define wow64kernel32_64 &shellcode[0x%lx]\n",(char*)&k_Base - (char*)&shell_start);
	fprintf(file,"#define wow64ntdll_64    &shellcode[0x%lx]\n",(char*)&n_Base - (char*)&shell_start);
	
	
	fclose(file);

	system("pause");
}

