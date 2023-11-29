#include "bin.h"
#include<stdio.h>

int main() {
    int num;
    printf("vvedite chislo: ");
    scanf("%d", &num);

    decToBin(num);

    return 0;
}
