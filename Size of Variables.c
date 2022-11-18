#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    float e;
    double l;
    char m;
    printf("Size of int: %zu bytes\n", sizeof(s));
    printf("Size of float: %zu bytes\n", sizeof(e));
    printf("Size of double: %zu bytes\n", sizeof(l));
    printf("Size of char: %zu bytes\n", sizeof(m));

    return 0;
}
