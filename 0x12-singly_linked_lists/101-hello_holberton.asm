section .data
    hello_msg db "Hello, Holberton", 10, 0  ; 10 is the ASCII code for newline, 0 is null terminator

section .text
    extern printf  ; Declare printf as an external function

global _start
_start:
    ; Prepare arguments for printf
    mov rdi, hello_msg  ; First argument: address of the string to be printed
    xor rax, rax  ; Clear rax register to indicate no vector registers used (for compatibility)
    call printf  ; Call printf function

    ; Exit the program
    mov rax, 60  ; syscall number for exit
    xor rdi, rdi  ; Exit code 0
    syscall  ; Perform the system call
