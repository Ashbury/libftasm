section .text
	global _ft_strcat
 
_ft_strcat:
	push rbp
	mov rbp, rsp
	lea rax, [rel rdi]

through_str1:
	cmp byte [rdi], 0
	jz concatenate
	inc rdi
	jmp through_str1

concatenate:
	cmp byte [rsi], 0
	jz end
	mov cl, byte [rsi]
	mov byte [rdi], cl
	inc rdi
	inc rsi
	jmp concatenate

end:
	mov byte [rdi], 0
	pop rbp
	ret