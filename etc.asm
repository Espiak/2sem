.intel_syntax noprefix


.global task2_extend_batt

.extern g_batt8
.extern g_batt32


task2_extend_batt:

    movzx eax, BYTE PTR [g_batt8]
    mov DWORD PTR [g_batt32], eax

    movzx eax, BYTE PTR [g_batt8 + 1]
    mov DWORD PTR [g_batt32 + 4], eax

    movzx eax, BYTE PTR [g_batt8 + 2]
    mov DWORD PTR [g_batt32 + 8], eax

    movzx eax, BYTE PTR [g_batt8 + 3]
    mov DWORD PTR [g_batt32 + 12], eax

    ret


