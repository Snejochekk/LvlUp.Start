#include "massfun.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fillMass(int *M, int mass)
{
    srand(time(nullptr));

    printf("Massive:\n");
    for(int i = 0; i < mass; ++i)
    {
        M[i] = rand() % 41 - 5;
        printf("%d ", M[i]);
    }

    printf("\n -----------------------------------------------\n");
    printf("Swap max & last negative elements: \n");
}

void findSwap(int *M, int mass, int max_index, int lastNgtv_index, int last_ngtv, int max_el)
{
for(int j = 0; j < mass; ++j)//найти макс эл и посл отриц.
{
    if (M[j] > max_el){

        max_el = M[j];
        max_index=j;
    }

    if (M[j] < 0){
         last_ngtv = M[j];
         lastNgtv_index = j;
     }
 }
    M[max_index] = last_ngtv;
    M[lastNgtv_index] = max_el;

    for(int j = 0; j < mass; ++j)
    {
        printf("%d ", M[j] );
    }
    printf("\n -----------------------------------------------\n");
    printf("\n");
}
