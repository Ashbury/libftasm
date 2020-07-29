global _ft_lstmap

section .text

_ft_lstmap:
	push rbp
	mov rbp, rsp
	push r12 ; lst head
	push r13 ; f()
	push r14 ; new head
	push r15 ; new->next
	mov r12, rdi
	mov r13, rsi
	call rsi
	mov r14, rax
	lea rdi, [r12 + 16]
	cmp qword [rdi], 0
	je end
	mov rdi, [r12 + 16]
	mov rsi, r13
	call _ft_lstmap
	mov r15, r14
	add r15, 16
	mov [r15], rax
	mov rax, r14

end:
	pop r15
	pop r14
	pop r13
	pop r12
	leave
	ret
