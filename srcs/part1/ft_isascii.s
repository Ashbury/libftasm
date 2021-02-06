section .text
	global _ft_isascii

_ft_isascii:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	jl return_zero
	cmp rdi, 127
	jg return_zero

return_one:
	mov eax, 1
	pop rbp
	ret

return_zero:
	mov eax, 0
	pop rbp
	ret