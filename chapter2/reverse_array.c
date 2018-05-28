#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    if(*x == *y)
        return;
    printf("swap begins, x = %d, y = %d\n", *x, *y);
    *y = *x ^ *y;
    printf("step 1 x = %d, y = %d\n", *x, *y);
    *x = *x ^ *y;
    printf("step 2 x = %d, y = %d\n", *x, *y);
    *y = *x ^ *y;
    printf("step 3 x = %d, y = %d\n", *x, *y);
}
void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         first <= last;
         first++, last--)
    {
        // printf("first = %d, last = %d", a[first], a[last]);
        inplace_swap(&a[first], &a[last]);
    }
}

int main()
{
    int cnt = 5;
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < cnt; i++)
        printf("a[%d]=%d ", i, a[i]);
    printf("\n---\n");
    reverse_array(a, cnt);
    for (int i = 0; i < cnt; i++)
        printf("a[%d]=%d ", i, a[i]);
    printf("\n");
    return 0;
}