;
; file	hello.asm
; To print hello world
;


section .text
	global _start

_start:
	mov ecx, msg
	mov edx, 0eH
	mov eax, 4
	mov ebx, 1
	int 80H

	mov eax, 1 ; system.exit
	int 80H


section .data
	msg db 'hello world !', 0aH
