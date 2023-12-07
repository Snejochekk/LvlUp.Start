#include "massfun.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Поменять местами максимальный и последний отрицательный элементы массива M(40)

int main()
{
    int mass = 40;
    int M[mass];

    fillMass(M, mass);

    int max_el=M[0];
    int max_index=0;
    int last_ngtv = M[0];
    int lastNgtv_index = 0;

    findSwap(M, mass, max_index, lastNgtv_index, last_ngtv, max_el);
}
