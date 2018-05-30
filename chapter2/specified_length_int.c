#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t x = INT32_MAX;
    uint64_t y = UINT64_MAX;
    // printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y);
    printf("x = %d, y = %lu\n", x, y);
}