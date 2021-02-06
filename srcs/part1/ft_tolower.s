section .text
	global _ft_tolower
	extern _ft_isupper

_ft_tolower:
	push rbp
	mov rbp, rsp
	call _ft_isupper
	cmp eax, 0
	je return
	add rdi, 32

return:
	mov rax, rdi
	pop rbp
	ret