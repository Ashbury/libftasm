%define SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define READ 3
%define WRITE 4
%define BUFF_SIZE 4096

global _ft_cat

section .bss
	buffer: resb BUFF_SIZE + 1

section .text

_ft_cat:
	push rbp
	mov rbp, rsp
	mov r8, rdi ; Saving the fd for later use.
	lea rsi, [rel buffer]

read_display_loop:
	mov rdi, r8
	mov rdx, BUFF_SIZE
	mov rax, SYSCALL(READ)
	syscall
	cmp rax, 1 ; Are we done ?
	jle return
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, SYSCALL(WRITE)
	syscall
	jmp read_display_loop


return:
	pop rbp
	ret