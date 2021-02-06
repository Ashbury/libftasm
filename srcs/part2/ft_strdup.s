section .text
global _ft_strdup
extern _ft_strlen
extern _malloc

_ft_strdup:
push rbp
mov rbp, rsp
sub rsp, 8
push rbx
mov rbx, rdi
call _ft_strlen
mov rdi, rax
mov rbp, rax
call _malloc
mov rcx, rbp
mov rdi, rax
mov rsi, rbx
cld
rep movsb
mov byte [rdi], 0
add rsp, 8
pop rbx
pop rbp
ret