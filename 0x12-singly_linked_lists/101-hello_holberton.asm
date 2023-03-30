section .data
    hello db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    push hello
    push fmt
    call printf
    add rsp, 16  ; clear the stack

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
