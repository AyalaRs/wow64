unsigned char shellcode[] = {
		0x33,0xC0,                                        	// xor eax, eax
		0xC3,                                             	// ret 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0x48,0x89,0x4C,0x24,0x08,                         	// mov qword ptr [rsp+08h], rcx
		0x48,0x83,0xEC,0x18,                              	// sub rsp, 18h
		0xC7,0x04,0x24,0x00,0x00,0x00,0x00,               	// mov dword ptr [rsp], 00000000h
		0x48,0x63,0x04,0x24,                              	// movsxd rax, qword ptr [rsp]
		0x48,0x8B,0x4C,0x24,0x20,                         	// mov rcx, qword ptr [rsp+20h]
		0x0F,0xBE,0x04,0x01,                              	// movsx eax, byte ptr [rcx+rax]
		0x8B,0x0C,0x24,                                   	// mov ecx, dword ptr [rsp]
		0xFF,0xC1,                                        	// inc ecx
		0x89,0x0C,0x24,                                   	// mov dword ptr [rsp], ecx
		0x85,0xC0,                                        	// test eax, eax
		0x74,0x02,                                        	// je 0046503Bh
		0xEB,0xE5,                                        	// jmp 00465020h
		0x8B,0x04,0x24,                                   	// mov eax, dword ptr [rsp]
		0x48,0x83,0xC4,0x18,                              	// add rsp, 18h
		0xC3,                                             	// ret 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0x48,0x89,0x54,0x24,0x10,                         	// mov qword ptr [rsp+10h], rdx
		0x48,0x89,0x4C,0x24,0x08,                         	// mov qword ptr [rsp+08h], rcx
		0x48,0x83,0xEC,0x38,                              	// sub rsp, 38h
		0xC7,0x44,0x24,0x28,0xFF,0xFF,0xFF,0xFF,          	// mov dword ptr [rsp+28h], FFFFFFFFh
		0x48,0x8B,0x4C,0x24,0x40,                         	// mov rcx, qword ptr [rsp+40h]
		0xE8,0xA0,0xFF,0xFF,0xFF,                         	// call 00465010h
		0x89,0x44,0x24,0x20,                              	// mov dword ptr [rsp+20h], eax
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0xE8,0x92,0xFF,0xFF,0xFF,                         	// call 00465010h
		0x89,0x44,0x24,0x24,                              	// mov dword ptr [rsp+24h], eax
		0x8B,0x44,0x24,0x24,                              	// mov eax, dword ptr [rsp+24h]
		0x39,0x44,0x24,0x20,                              	// cmp dword ptr [rsp+20h], eax
		0x75,0x43,                                        	// jne 004650CFh
		0x8B,0x44,0x24,0x20,                              	// mov eax, dword ptr [rsp+20h]
		0x89,0x44,0x24,0x28,                              	// mov dword ptr [rsp+28h], eax
		0x8B,0x44,0x24,0x28,                              	// mov eax, dword ptr [rsp+28h]
		0xFF,0xC8,                                        	// dec eax
		0x89,0x44,0x24,0x28,                              	// mov dword ptr [rsp+28h], eax
		0x83,0x7C,0x24,0x28,0x00,                         	// cmp dword ptr [rsp+28h], 00000000h
		0x7C,0x20,                                        	// jl 004650C5h
		0x48,0x63,0x44,0x24,0x28,                         	// movsxd rax, qword ptr [rsp+28h]
		0x48,0x8B,0x4C,0x24,0x40,                         	// mov rcx, qword ptr [rsp+40h]
		0x0F,0xBE,0x04,0x01,                              	// movsx eax, byte ptr [rcx+rax]
		0x48,0x63,0x4C,0x24,0x28,                         	// movsxd rcx, qword ptr [rsp+28h]
		0x48,0x8B,0x54,0x24,0x48,                         	// mov rdx, qword ptr [rsp+48h]
		0x0F,0xBE,0x0C,0x0A,                              	// movsx ecx, byte ptr [rdx+rcx]
		0x3B,0xC1,                                        	// cmp eax, ecx
		0x74,0xCF,                                        	// je 00465094h
		0x8B,0x44,0x24,0x28,                              	// mov eax, dword ptr [rsp+28h]
		0xFF,0xC0,                                        	// inc eax
		0x89,0x44,0x24,0x28,                              	// mov dword ptr [rsp+28h], eax
		0x8B,0x44,0x24,0x28,                              	// mov eax, dword ptr [rsp+28h]
		0x48,0x83,0xC4,0x38,                              	// add rsp, 38h
		0xC3,                                             	// ret 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0x48,0x83,0xEC,0x18,                              	// sub rsp, 18h
		0x65,0x48,0x8B,0x04,0x25,0x30,0x00,0x00,0x00,     	// mov rax, qword ptr [00000030h]
		0x48,0x8B,0x40,0x60,                              	// mov rax, qword ptr [rax+60h]
		0x48,0x8B,0x40,0x18,                              	// mov rax, qword ptr [rax+18h]
		0x48,0x8B,0x40,0x30,                              	// mov rax, qword ptr [rax+30h]
		0x48,0x89,0x04,0x24,                              	// mov qword ptr [rsp], rax
		0x48,0x8B,0x04,0x24,                              	// mov rax, qword ptr [rsp]
		0x48,0x8B,0x40,0x10,                              	// mov rax, qword ptr [rax+10h]
		0x48,0x89,0x05,0x14,0x02,0x00,0x00,               	// mov qword ptr [0000000000465320h], rax
		0x48,0x8B,0x04,0x24,                              	// mov rax, qword ptr [rsp]
		0x48,0x8B,0x00,                                   	// mov rax, qword ptr [rax]
		0x48,0x8B,0x00,                                   	// mov rax, qword ptr [rax]
		0x48,0x8B,0x40,0x10,                              	// mov rax, qword ptr [rax+10h]
		0x48,0x89,0x05,0xF7,0x01,0x00,0x00,               	// mov qword ptr [0000000000465318h], rax
		0x48,0x83,0xC4,0x18,                              	// add rsp, 18h
		0xC3,                                             	// ret 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0xCC,                                             	// int3 
		0x4C,0x89,0x44,0x24,0x18,                         	// mov qword ptr [rsp+18h], r8
		0x48,0x89,0x54,0x24,0x10,                         	// mov qword ptr [rsp+10h], rdx
		0x48,0x89,0x4C,0x24,0x08,                         	// mov qword ptr [rsp+08h], rcx
		0x48,0x81,0xEC,0x98,0x00,0x00,0x00,               	// sub rsp, 0000000000000098h
		0x48,0xC7,0x44,0x24,0x78,0x00,0x00,0x00,0x00,     	// mov qword ptr [rsp+78h], 0000000000000000h
		0x48,0x8B,0x84,0x24,0xA0,0x00,0x00,0x00,          	// mov rax, qword ptr [rsp+000000A0h]
		0x48,0x89,0x44,0x24,0x48,                         	// mov qword ptr [rsp+48h], rax
		0x48,0x8B,0x44,0x24,0x48,                         	// mov rax, qword ptr [rsp+48h]
		0x0F,0xB7,0x00,                                   	// movzx eax, word ptr [rax]
		0x3D,0x4D,0x5A,0x00,0x00,                         	// cmp eax, 00005A4Dh
		0x74,0x05,                                        	// je 00465170h
		0xE9,0x60,0x01,0x00,0x00,                         	// jmp 004652D0h
		0x48,0x8B,0x44,0x24,0x48,                         	// mov rax, qword ptr [rsp+48h]
		0x48,0x63,0x40,0x3C,                              	// movsxd rax, qword ptr [rax+3Ch]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x40,                         	// mov qword ptr [rsp+40h], rax
		0x48,0x8B,0x44,0x24,0x40,                         	// mov rax, qword ptr [rsp+40h]
		0x81,0x38,0x50,0x45,0x00,0x00,                    	// cmp dword ptr [rax], 00004550h
		0x74,0x05,                                        	// je 0046519Bh
		0xE9,0x35,0x01,0x00,0x00,                         	// jmp 004652D0h
		0x48,0x8B,0x44,0x24,0x40,                         	// mov rax, qword ptr [rsp+40h]
		0x48,0x83,0xC0,0x18,                              	// add rax, 18h
		0x48,0x89,0x44,0x24,0x58,                         	// mov qword ptr [rsp+58h], rax
		0x48,0x8B,0x44,0x24,0x58,                         	// mov rax, qword ptr [rsp+58h]
		0x0F,0xB7,0x00,                                   	// movzx eax, word ptr [rax]
		0x3D,0x0B,0x02,0x00,0x00,                         	// cmp eax, 0000020Bh
		0x74,0x05,                                        	// je 004651BDh
		0xE9,0x13,0x01,0x00,0x00,                         	// jmp 004652D0h
		0x48,0x8B,0x44,0x24,0x58,                         	// mov rax, qword ptr [rsp+58h]
		0x8B,0x40,0x70,                                   	// mov eax, dword ptr [rax+70h]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x30,                         	// mov qword ptr [rsp+30h], rax
		0x48,0x8B,0x44,0x24,0x30,                         	// mov rax, qword ptr [rsp+30h]
		0x8B,0x40,0x18,                                   	// mov eax, dword ptr [rax+18h]
		0x89,0x44,0x24,0x70,                              	// mov dword ptr [rsp+70h], eax
		0x48,0x8B,0x44,0x24,0x30,                         	// mov rax, qword ptr [rsp+30h]
		0x8B,0x40,0x24,                                   	// mov eax, dword ptr [rax+24h]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x68,                         	// mov qword ptr [rsp+68h], rax
		0x48,0x8B,0x44,0x24,0x30,                         	// mov rax, qword ptr [rsp+30h]
		0x8B,0x40,0x20,                                   	// mov eax, dword ptr [rax+20h]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x60,                         	// mov qword ptr [rsp+60h], rax
		0x48,0x8B,0x44,0x24,0x30,                         	// mov rax, qword ptr [rsp+30h]
		0x8B,0x40,0x1C,                                   	// mov eax, dword ptr [rax+1Ch]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x38,                         	// mov qword ptr [rsp+38h], rax
		0x48,0x8B,0x84,0x24,0xA8,0x00,0x00,0x00,          	// mov rax, qword ptr [rsp+000000A8h]
		0x48,0x89,0x44,0x24,0x20,                         	// mov qword ptr [rsp+20h], rax
		0xC7,0x44,0x24,0x2C,0x00,0x00,0x00,0x00,          	// mov dword ptr [rsp+2Ch], 00000000h
		0xEB,0x0A,                                        	// jmp 0046524Ah
		0x8B,0x44,0x24,0x2C,                              	// mov eax, dword ptr [rsp+2Ch]
		0xFF,0xC0,                                        	// inc eax
		0x89,0x44,0x24,0x2C,                              	// mov dword ptr [rsp+2Ch], eax
		0x8B,0x44,0x24,0x70,                              	// mov eax, dword ptr [rsp+70h]
		0x39,0x44,0x24,0x2C,                              	// cmp dword ptr [rsp+2Ch], eax
		0x7D,0x7C,                                        	// jnl 004652D0h
		0x48,0x63,0x44,0x24,0x2C,                         	// movsxd rax, qword ptr [rsp+2Ch]
		0x48,0x8B,0x4C,0x24,0x60,                         	// mov rcx, qword ptr [rsp+60h]
		0x48,0x63,0x04,0x81,                              	// movsxd rax, qword ptr [rcx+rax*4]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x50,                         	// mov qword ptr [rsp+50h], rax
		0x48,0x8B,0x44,0x24,0x50,                         	// mov rax, qword ptr [rsp+50h]
		0x0F,0xBE,0x00,                                   	// movsx eax, byte ptr [rax]
		0x48,0x8B,0x4C,0x24,0x20,                         	// mov rcx, qword ptr [rsp+20h]
		0x0F,0xBE,0x09,                                   	// movsx ecx, byte ptr [rcx]
		0x3B,0xC1,                                        	// cmp eax, ecx
		0x75,0x45,                                        	// jne 004652CBh
		0x48,0x8B,0x54,0x24,0x50,                         	// mov rdx, qword ptr [rsp+50h]
		0x48,0x8B,0x4C,0x24,0x20,                         	// mov rcx, qword ptr [rsp+20h]
		0xE8,0xBB,0xFD,0xFF,0xFF,                         	// call 00465050h
		0x85,0xC0,                                        	// test eax, eax
		0x75,0x32,                                        	// jne 004652CBh
		0x48,0x63,0x44,0x24,0x2C,                         	// movsxd rax, qword ptr [rsp+2Ch]
		0x48,0x8B,0x4C,0x24,0x68,                         	// mov rcx, qword ptr [rsp+68h]
		0x0F,0xBF,0x04,0x41,                              	// movsx eax, word ptr [rcx+rax*2]
		0x89,0x44,0x24,0x28,                              	// mov dword ptr [rsp+28h], eax
		0x48,0x63,0x44,0x24,0x28,                         	// movsxd rax, qword ptr [rsp+28h]
		0x48,0x8B,0x4C,0x24,0x38,                         	// mov rcx, qword ptr [rsp+38h]
		0x48,0x63,0x04,0x81,                              	// movsxd rax, qword ptr [rcx+rax*4]
		0x48,0x8B,0x4C,0x24,0x48,                         	// mov rcx, qword ptr [rsp+48h]
		0x48,0x03,0xC8,                                   	// add rcx, rax
		0x48,0x8B,0xC1,                                   	// mov rax, rcx
		0x48,0x89,0x44,0x24,0x78,                         	// mov qword ptr [rsp+78h], rax
		0xEB,0x05,                                        	// jmp 004652D0h
		0xE9,0x70,0xFF,0xFF,0xFF,                         	// jmp 00465240h
		0x48,0x8B,0x84,0x24,0xB0,0x00,0x00,0x00,          	// mov rax, qword ptr [rsp+000000B0h]
		0x48,0x8B,0x4C,0x24,0x78,                         	// mov rcx, qword ptr [rsp+78h]
		0x48,0x89,0x08,                                   	// mov qword ptr [rax], rcx
		0x48,0x83,0x7C,0x24,0x78,0x00,                    	// cmp qword ptr [rsp+78h], 0000000000000000h
		0x74,0x0D,                                        	// je 004652F5h
		0xC7,0x84,0x24,0x80,0x00,0x00,0x00,0x01,0x00,0x00,0x00,	// mov dword ptr [rsp+00000080h], 00000001h
		0xEB,0x0B,                                        	// jmp 00465300h
		0xC7,0x84,0x24,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// mov dword ptr [rsp+00000080h], 00000000h
		0x8B,0x84,0x24,0x80,0x00,0x00,0x00,               	// mov eax, dword ptr [rsp+00000080h]
		0x48,0x81,0xC4,0x98,0x00,0x00,0x00,               	// add rsp, 0000000000000098h
		0xC3,                                             	// ret 
		0xCC,                                             	// int3 
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x31,0x32,0x33,0x00,0x00,0x00,0x00,0x00,
		0x34,0x00,0x35,0x00,0x36,0x00,0x00,0x00,
		0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0
}