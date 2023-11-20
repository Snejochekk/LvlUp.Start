#include "fun.h"
#include <stdio.h>


int func(int number, int sortnumb, int powerOfTen, int originalNumber)
{
    while (number > 0) {
        int digit = number % 10;  // получаем последнюю цифру числа
        number /= 10;  // убираем последнюю цифру из числа

        int temp = sortnumb;
        int newPowerOfTen = powerOfTen;
        while (temp > 0 && digit > temp % 10) {
            temp /= 10;
            newPowerOfTen *= 10;
        }

        sortnumb = sortnumb / newPowerOfTen * newPowerOfTen * 10 + digit * newPowerOfTen + sortnumb % newPowerOfTen;
    }

    printf("ishodnoe chislo: %d otsortirovannoe chislo po ubivaniu: %d\n", originalNumber, sortnumb);

    return 0;
}

