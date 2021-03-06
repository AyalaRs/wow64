;/*

option casemap:none
option prologue:none
option epilogue:none
option proc:export


.code




end
;*/



#include "..\debug\shellcode.h"
#include "wow64.h"

__int64 _thunk_w64_data_list[]={
	(__int64)wow64ntdll_64,
	(__int64)wow64kernel32_64
}; 

__int64 _thunk_w64_func_list[index_wow64_max]={
	0
};
__int64 _thunk_w64_args_list[index_wow64_max]={
	8*32
};



void __declspec(naked) __fastcall _thunk_wow64_dispatch()
{
	__asm ret
}
void __declspec(naked) __fastcall _thunk_w64_to_wow64()
{
	__asm
	{
		mov esp,ebx 
		inc eax
		mov ebx,[esp]
		add esp,8
		
		sub esp,8
		mov dword ptr [esp+0],offset _thunk_wow64_dispatch
		mov dword ptr [esp+4],23h
		retf
	}
}
void __declspec(naked)  __fastcall _thunk_w64_invoke()
{
	__asm
	{
		
		cmp dword ptr [esp],8*1
		dec eax
		cmovae ecx,[esp+0x10]
		
		cmp dword ptr [esp],8*2
		dec eax
		cmovae edx,[esp+0x18]
		
		cmp dword ptr [esp],8*3
		dec esp
		cmovae eax,[esp+0x20]
		
		cmp dword ptr [esp],8*4
		dec esp
		cmovae ecx,[esp+0x28]
		
		add esp,8
		dec eax
		jmp eax
	}
}

void __declspec(naked) __fastcall _thunk_wow64_to_w64()
{
	__asm
	{
		sub esp,8
		mov [esp],ebx
		mov ebx,esp
		
		/*alloc stack*/
		mov ecx,dword ptr _thunk_w64_args_list[eax*8]
		sub esp,ecx
		
		/*strmov args*/
		mov edi,esp
		mov esi,edx
		rep movsb
		
		/*set return address*/
		sub esp,8
		mov dword ptr [esp],offset _thunk_w64_to_wow64
		mov dword ptr [esp+4],0
		
		/*log args*/
		mov ecx,dword ptr _thunk_w64_args_list[eax*8]
		sub esp,8
		mov [esp],ecx

		/*set tag func*/
		mov eax,dword ptr _thunk_w64_func_list[eax*8]
		
		/*jmp tag proc*/
		sub esp,8
		mov dword ptr [esp+0],offset _thunk_w64_invoke
		mov dword ptr [esp+4],33h
		retf
	}
}

void __declspec(naked) wow64initEx(__int64 pf,__int64 pfn,__int64 pfmax)
{
	__asm
	{
		lea edx,[esp+4]
		xor eax,eax
		call _thunk_wow64_to_w64
		ret
	}
}


void wow64init()
{
	_thunk_w64_func_list[0]=(__int64)&shellcode;
	_thunk_w64_args_list[0]=3*8;
	wow64initEx((__int64)&_thunk_w64_func_list,(__int64)&_thunk_w64_pfn_list,(__int64)index_wow64_max);
}



#define w64bywow64(_s_) \
int __declspec(naked) wow64 ## _s_ ## () \
{ \
	__asm lea edx,[esp+4] \
	__asm mov eax,index ## _s_ \
	__asm call _thunk_wow64_to_w64 \
	__asm ret \
}



int main()
{
	int i;
	//__asm int 3
	wow64init();
	//__asm int 3
	for (i=0;i<index_wow64_max;i++)
	{
		printf("0x%llx   %s\n",_thunk_w64_func_list[i],_thunk_w64_pfn_list[i]);
	}
	
	printf("done\n");
	system("pause");
	return 0;
}

