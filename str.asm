;
;	file str.asm
;	priting a group of sentence
;

section .text
	global _start
_start:
	mov eax, 4
	mov ecx, msg1
	mov edx, msg1.len
	int 80H

	mov eax, 1
	int 80H

section .data
	msg1 db 'Name: Ayush Kumar', 0xA, 'College Name: Asha M. Tarsadia Institute of Computer Science and Technology', 0xA, 'Course Name: B.tech Computer Science and Engineering', 0xA
	msg1.len equ $- msg1
