#include <stdio.h>
#include <stdio.h>
#include <stdint.h>

int task1_extend_temp(int a,int b);

int8_t  g_temp8[4]  = { -12, 7, -1, -128 };
int32_t g_temp32[4] = { 111, 222, 333, 444 };   // záměrně špatně – má se přepsat

static void print_task1(void) {
    printf("Temp (int8):  %d %d %d %d\n",g_temp8[0], g_temp8[1], g_temp8[2], g_temp8[3]);
    printf("Temp (int32): %d %d %d %d\n",g_temp32[0], g_temp32[1], g_temp32[2], g_temp32[3]);
}

int main(){

    puts("\n1) Teplota: rozšíření int8 -> int32 se znaménkem (MOVSX)");
    puts("\nPřed:");
    print_task1();

    g_temp32[0] = task1_extend_temp(g_temp8[0],g_temp32[0]);
    g_temp32[1] = task1_extend_temp(g_temp8[1],g_temp32[1]);
    g_temp32[2] = task1_extend_temp(g_temp8[2],g_temp32[2]);
    g_temp32[3] = task1_extend_temp(g_temp8[3],g_temp32[3]);

    puts("\nPo:");
    print_task1();
    return 0;
}