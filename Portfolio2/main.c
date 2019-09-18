#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    printf("Data Type %20.2\tMinimum %20.2\tMaximum\n");
    printf("Character %29.2d\t %26.2d\n", CHAR_MIN, CHAR_MAX);
    printf("Integer %31.2d\t  %25.2d\n", INT_MIN, INT_MAX);
    printf("Unsigned Integer  %49.2u\n", UINT_MAX);
    printf("Long Integer %26.2ld\t %26.2ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned Long Int %21.2lu\n", ULONG_MAX);
    return 0;
}
