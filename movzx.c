#include <stdio.h>
#include <stdio.h>
#include <stdint.h>

extern void task2_extend_batt(void);

uint8_t  g_batt8[4]   = { 0, 1, 200, 255 };
uint32_t g_batt32[4]  = { 9, 9, 9, 9 };     // záměrně špatně – má se přepsat

static void print_task2(void) {
    printf("Batt (u8):   %u %u %u %u\n",g_batt8[0], g_batt8[1], g_batt8[2], g_batt8[3]);
    printf("Batt (u32):  %u %u %u %u\n",g_batt32[0], g_batt32[1], g_batt32[2], g_batt32[3]);
}


int main() {
    puts("\n2) Baterie: rozšíření uint8 -> uint32 bez znaménka (MOVZX)");
    puts("Před:");
    print_task2();

    task2_extend_batt();

    puts("Po:");
 
   print_task2();
}

