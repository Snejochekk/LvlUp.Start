#include <stdio.h>

int main()
{
    int a = 5;
    int c = 4;
    int b = 7;
    int d = 2;
    c = a;
    printf("a = %d, c = %d, b = %d, d = %d\n", a,c,b,d);
    a = a + b -2;
    printf("a = %d, c = %d, b = %d, d= %d\n", a,c,b,d);
    c = c + 1, d = c - a + d;
    printf("a = %d, c = %d, b = %d, d = %d\n", a,c,b,d);
    a = a * c, c = c - 1;
    printf("a = %d, c = %d, b = %d, d = %d\n", a,c,b,d);

    a = a / 10, c = c / 2, b = b - 1, d = d * ( c + b + a);

    printf("a = %d, c = %d, b = %d, d = %d\n", a,c,b,d);
    return 0;
}
