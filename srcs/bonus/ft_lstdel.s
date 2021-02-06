global _ft_lstdel
extern _free

section .text

_ft_lstdel:
	push rbp
	mov rbp, rsp
	push r12
	push r13
	push r14
	push r15
	mov r12, rdi
	mov r13, rsi
	mov r14, [rdi]
	lea r15, [rdi]
	cmp r14, 0
	je end
	mov rdi, [r14]
	lea rsi, [r14 + 8]
	call r13
	lea rdi, [r14 + 16]
	mov rsi, r13
	call _ft_lstdel
	mov rdi, [r15]
	call _free
	mov qword [r15], 0

end:
	pop r15
	pop r14
	pop r13
	pop r12
	leave
	ret