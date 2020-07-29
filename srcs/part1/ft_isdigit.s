section .text
	global _ft_isdigit

_ft_isdigit:
	push rbp
	mov rbp, rsp
	cmp rdi, '0'
	jl return_zero
	cmp rdi, '9'
	jg return_zero

return_one:
	mov rax, 1
	pop rbp
	ret

return_zero:
	mov rax, 0
	pop rbp
	ret