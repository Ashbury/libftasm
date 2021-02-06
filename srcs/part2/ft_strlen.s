section .text
	global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	mov rcx, 0
	mov rax, 0
	not rcx
	cld
	repne scasb
	not rcx
	dec rcx
	mov rax, rcx
	pop rbp
	ret