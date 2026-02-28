//***************************************************************************
//
// Program for education in subject "Assembly Languages"
// petr.olivka@vsb.cz, Department of Computer Science, VSB-TUO
//
// Empty project
//
//***************************************************************************

#include <stdio.h>
#include <stdint.h>
// Functions
// void some_asm_function();

// Variables
// type g_some_c_variable;

extern void task1_extend_temp(void);

int8_t  g_temp8[4]  = { -12, 7, -1, -128 };
int32_t g_temp32[4] = { 111, 222, 333, 444 };   // záměrně špatně – má se přepsat

static void print_task1(void) {
    printf("Temp (int8):  %d %d %d %d\n", g_temp8[0], g_temp8[1], g_temp8[2], g_temp8[3]);
    printf("Temp (int32): %d %d %d %d\n", g_temp32[0], g_temp32[1], g_temp32[2], g_temp32[3]);
}

void test_task1(void) {
    puts("\n1) Teplota: rozšíření int8 -> int32 se znaménkem (MOVSX)");
    puts("Před:");
    print_task1();

    task1_extend_temp();

    puts("Po:");
    print_task1();
}

