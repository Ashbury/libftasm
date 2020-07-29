%define SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

global _ft_putnbr

section .text

_ft_putnbr:
	push rbp
	mov rbp, rsp
	push rbx
	sub rsp, 16
	mov r11, 0 ; is the number negative ?
	mov rcx, 0 ; length of the number
	mov eax, edi
	lea r8, [rsp]
	cmp eax, 0
	jl negative
	mov rbx, 10 ; for division
	jmp stack_filling

negative:
	mov rbx, -1
	imul ebx
	mov byte[r8], '-'
	mov r11, 1
	inc r8
	inc rcx
	mov rbx, 10

stack_filling:
	cmp rax, 10
	jl end_filling
	mov rdx, 0
	div rbx
	add dl, '0'
	mov [r8], dl
	inc r8
	inc rcx
	jmp stack_filling

end_filling:
	add al, '0'
	mov byte [r8], al
	inc rcx
	mov rdx, rcx ; save length for write
	lea r10, [rsp + r11]
	shr rcx, 1
	jz end

rev:
	mov dil, [r8]
	mov al, [r10]
	mov [r8], al
	mov [r10], dil
	inc r10
	dec r8
	dec rcx
	jnz rev

end:
	mov rdi, STDOUT
	lea rsi, [rsp]
	mov rax, SYSCALL(WRITE)
	syscall
	pop rbx
	leave
	ret

