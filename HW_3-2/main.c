#include <stdio.h>

int main() {
    int N;
    printf("vvedite chislo: ");
    scanf("%d", &N);

    int count = 0; //счетчик
    while (N != 0) { //пока число не равно нулю
        count++; //увеличиваем счетчик на единицу
        N /= 10; //делим число на 10, чтобы избавиться от последней цифры
    }
    printf("kol-vo cifr v chisle = %d\n", count);
    return 0;
}

