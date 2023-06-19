section .data
    hello db "Hello, Holberton", 10 ; 

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    sub rsp, 8
    mov rdi, format
    mov rsi, hello
    xor eax, eax
    call printf

    add rsp, 8

    mov eax, 0
    leave
    ret

