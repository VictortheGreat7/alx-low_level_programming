section .data
hello db "Hello, Holberton",0x0a,0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

lea rdi, [hello]
mov eax, 0
call printf

mov rsp, rbp
pop rbp
mov rax, 0
ret

