#include <stdio.h>

int uadd_check(unsigned x, unsigned y)
{
    unsigned r = x + y;
    printf("%u + %u = %u, ", x, y, r);
    if (r < x || r < y)
    {
        printf("overflow\n");
        return 1;
    }
    printf("\n");
    return 0;
}

int main()
{
    unsigned x = 0xf0010000;
    unsigned y = 0xf0020000;
    uadd_check(x, y);
    uadd_check(0x0, 0xffff0000);
    uadd_check(0x80000000, 0x80000001);
    uadd_check(0xffffffff, 0x00000001);
}
