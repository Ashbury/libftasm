section .text
	global _ft_toupper
	extern _ft_islower

_ft_toupper:
	push rbp
	mov rbp, rsp
	call _ft_islower
	cmp eax, 0
	je return
	sub rdi, 32

return:
	mov rax, rdi
	pop rbp
	ret