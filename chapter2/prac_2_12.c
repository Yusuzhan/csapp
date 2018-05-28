#include <stdio.h>

void a(int x)
{
    int rs = x & 0xFF;
    printf("a -- %.2x\n", rs);
}

void b(int x)
{
    int tail = x & 0xFF;
    x = ~x & (~0xFF);
    x = x | tail;
    printf("b -- %.2x\n", x);
}

void c(int x)
{
    x = x | 0xFF;
    printf("c -- %.2x\n", x);
}

int main()
{
    int x = 0x87654321;
    a(x);
    b(x);
    c(x);
}