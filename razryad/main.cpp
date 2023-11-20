#include "fun.h"
#include <stdio.h>

int main()
{
    int number;
    printf("vvedite chislo = ");
    scanf("%d", &number);
    int originalNumber = number;
    int sortnumb = 0;
    int powerOfTen = 1;
    func(number, sortnumb, powerOfTen, originalNumber);
    return 0;
}
