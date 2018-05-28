#include <stdio.h>

int main()
{
    int lval = 0xFEDCBA98 << 32;
    int lval1 = 0xFEDCBA98 << 0;
    printf("lval = %.2x, lval1 = %.2x\n", lval, lval1);
    int aval = 0xFEDCBA98 >> 36;
    int aval1 = 0xFEDCBA98 >> 4;
    printf("aval = %.2x, aval1 = %.2x\n", aval, aval1);
    int uval = 0xFEDCBA98 >> 40;
    int uval1 = 0xFEDCBA98 >> 40;
    printf("uval = %.2x, uval1 = %.2x\n", uval, uval1);
}