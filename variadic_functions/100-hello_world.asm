; 100-hello_world.asm
;
; Author: Salomon Chambi
; x86_64 Assembly

section .data:
	message db "Hello, World", 10

section .text:
	global main

main:
	mov rax, 1		; use the write syscall
	mov rdi, 1		; use stdout as the file descriptor
	mov rsi, message	; address of string to output
	mov edx, 13		; number of bytes
	syscall			; invoke the write syscall

	; time to exit

	mov rax, 60		; use the exit syscall
	mov rdi, 0		; return value
	syscall			; invoke the exit syscall


