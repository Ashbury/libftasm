global _ft_strrev

extern _ft_strlen

section .text

_ft_strrev:
	push rbp,
	mov rbp, rsp
	mov r8, rdi
	call _ft_strlen
	mov rsi, r8
	lea r9, [rsi + rax - 1]
	shr rax, 1
	jz end

my_loop:
	mov dl, [rsi]
	mov cl, [r9]
	mov [rsi], cl
	mov [r9], dl
	inc si
	dec r9
	dec rax
	jnz my_loop

end:
	mov rax, r8
	leave
	ret
