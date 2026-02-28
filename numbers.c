#include <stdio.h>

void uprav_pole(int* cisla,int x);
int main(int argc, char const *argv[])
{


    int cisla[] = {3,6,5};
    int* pin = cisla;
    uprav_pole(pin,sizeof(cisla)/4);
    printf("%ld",sizeof(cisla)/4);
    
    return 0;
}
