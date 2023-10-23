; My first assembly code ever!

section .data
msg db 'Hello, world!', 0xa ;my string
len equ $ - msg


section .text
	global main
main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80
	mov eax, 1
	int 0x80
