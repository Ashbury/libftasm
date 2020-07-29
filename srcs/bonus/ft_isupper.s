section .text
	global _ft_isupper

_ft_isupper:
	push rbp
	mov rbp, rsp
	cmp rdi, 'A'
	jl return_zero
	cmp rdi, 'Z'
	jg return_zero

return_one:
	mov eax, 1
	pop rbp
	ret

return_zero:
	mov eax, 0
	pop rbp
	ret