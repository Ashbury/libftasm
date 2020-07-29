global _ft_lstadd

section .text

_ft_lstadd:
	push rbp
	mov rbp, rsp
	lea r8, [rsi + 16]
	lea r9, [rdi]
	mov r10, [rdi]
	mov [r8], r10
	mov [r9], rsi
	leave
	ret
