section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rcx, rsi
	mov rdx, rdi
	mov rax, 0
	cld
	rep stosb
	mov rax, rdx
	pop rbp
	ret