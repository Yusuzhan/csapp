#include<stdio.h>

int main() 
{
    int x = 0xf0000000;
    int y = 0xf0000000;
    int z = x + y;
    printf("%d", z);
    printf("\n");

    int a = 0b1111;
    printf("%x", (a + a));
    return 0;
}
