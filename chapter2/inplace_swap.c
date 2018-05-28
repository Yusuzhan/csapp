#include<stdio.h>

void inplace_swap(int *x, int *y) {
    printf("swap begins, x = %d, y = %d\n", *x, *y);    
    *y = *x ^ *y;
    printf("step 1 x = %d, y = %d\n", *x, *y);
    *x = *x ^ *y;
    printf("step 2 x = %d, y = %d\n", *x, *y);
    *y = *x ^ *y;
    printf("step 3 x = %d, y = %d\n", *x, *y);
}

int main() {
    int x = 123;
    int y = 123;
    inplace_swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}   