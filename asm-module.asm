;***************************************************************************
;
; Program for education in subject "Assembly Languages" and "APPS"
; petr.olivka@vsb.cz, Department of Computer Science, VSB-TUO
;
; Empty project
;
;***************************************************************************

bits 64

global _start

extern test_task1
extern print_task1
extern g_temp8
extern g_temp32

section .text

_start:

    ; Call C function test_task1 (prints before)
    call test_task1

    ; Now manually copy from g_temp8 -> g_temp32 using movsx
    movsx eax, byte [g_temp8]
    mov dword [g_temp32], eax

    movsx eax, byte [g_temp8 + 1]
    mov dword [g_temp32 + 4], eax

    movsx eax, byte [g_temp8 + 2]
    mov dword [g_temp32 + 8], eax

    movsx eax, byte [g_temp8 + 3]
    mov dword [g_temp32 + 12], eax

    ; Call C print_task1 to see result
    call print_task1

    ; Exit program cleanly
    mov rax, 60
    xor rdi, rdi
    syscall

