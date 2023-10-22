section .data
    hello db "Hello, Holberton", 10, 0 ; The string to be printed, followed by a newline and null terminator

section .text
    global main

extern printf

main:
    ; Load the address of the format string into rdi
    lea rdi, [hello]

    ; Call the printf function
    call printf

    ; Exit the program
    mov rax, 60         ; sys_exit
    xor rdi, rdi        ; status: 0
    syscall
