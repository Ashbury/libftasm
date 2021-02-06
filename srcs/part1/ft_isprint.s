section .text
	global _ft_isprint

_ft_isprint:
	push rbp
	mov rbp, rsp
	cmp rdi, 32
	jl return_zero
	cmp rdi, 126
	jg return_zero

return_one:
	mov eax, 1
	pop rbp
	ret

return_zero:
	mov eax, 0
	pop rbp
	ret