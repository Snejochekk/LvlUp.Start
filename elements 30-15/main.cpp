#include "MassAB.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15)

int main()
{
    constexpr int A = 30;
    int Mesto_A[A];
    constexpr int B = 15;
    int Mesto_B[B];
    int e = 0;
    int elem[30];
    int i;
    int j;

    MassAB(Mesto_A, Mesto_B, A, B, i, j);
    FindInd(Mesto_A, Mesto_B, A, B, elem);
}


