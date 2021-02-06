section .text
	global _ft_islower

_ft_islower:
	push rbp
	mov rbp, rsp
	cmp rdi, 'a'
	jl return_zero
	cmp rdi, 'z'
	jg return_zero

return_one:
	mov eax, 1
	pop rbp
	ret

return_zero:
	mov eax, 0
	pop rbp
	ret