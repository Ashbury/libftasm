%define SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data
	null_string:
		.s db "(null)", 10
		.len equ $ - .s
		.endline db 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp
	mov rbp, rsp
	test rdi, rdi
	je null
	push rdi
	call _ft_strlen

writing:
	pop rdi
	mov rcx, rax
	cmp rcx, 0
	jz endline
	mov rsi, rdi
	mov rdi, STDOUT
	mov rdx, rcx
	mov rax, SYSCALL(WRITE)
	syscall
	jmp endline

endline:
	mov rdi, STDOUT
	lea rsi, [rel null_string.endline]
	mov rdx, 1
	mov rax, SYSCALL(WRITE)
	syscall
	mov rax, 10
	leave
	ret

null:
	mov rdi, STDOUT
	lea rsi, [rel null_string.s]
	mov rdx, null_string.len
	mov rax, SYSCALL(WRITE)
	syscall
	mov rax, 10
	leave
	ret