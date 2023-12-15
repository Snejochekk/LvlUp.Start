#include "fillmtrx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand(time(nullptr));
    constexpr int a = 7;
    int mass[a][a];
    int i;

    fill(a, &mass[a][a]);

    printM(a, &mass[a][a]);

    int k;
    printf("\nstroka zameny: ");
    scanf("%d", &k);

    swapRows(a, &mass[a][a], k);


 }
