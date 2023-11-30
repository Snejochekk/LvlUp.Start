#include "bin.h"
#include <stdio.h>

void decToBin(int num) {
    // если число равно 0, его двоичное представление также будет 0
    if(num == 0) {
        printf("0 = %d\n", 0);
    }
    else {
        int binary = 0;  // хранит двоичное представление числа
        int digit = 1;  // текущий разряд двоичного числа, начинаем с 1

        // пока число не станет равным 0
        while(num > 0) {
            // получаем остаток от деления числа на 2
            int remainder = num % 2;

            // добавляем разряд в двоичное представление числа
            binary += remainder * digit;

            // умножаем разряд на 10, чтобы перейти к следующему разряду
            digit *= 10;

            // делаем целочисленное деление числа на 2
            num = num / 2;
        }

        printf("dvoichnoe predstavlenie chisla : %d\n", binary);
    }
}
