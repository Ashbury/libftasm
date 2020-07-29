global _ft_strcmp

section .text

_ft_strcmp:
	push rbp
	mov rbp, rsp
	xor rax, rax
	xor rcx, rcx

compare:
	mov al, byte [rdi]
	mov cl, byte [rsi]
	cmp al, cl
	jne end
	cmp al, 0
	je end
	inc rdi
	inc rsi
	jmp compare

end:
	sub rax, rcx
	leave
	ret
