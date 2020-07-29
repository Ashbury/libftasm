section .text
	global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	mov rcx, rdx
	mov rax, rdi
	cld
	rep movsb
	pop rbp
	ret