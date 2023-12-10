#include "MassAB.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MassAB(int *Mesto_A, int *Mesto_B, int A, int B, int i, int j)
{
srand(time(nullptr));

printf("A: ");
for(i = 0; i < A; ++i)
{
    Mesto_A[i] = rand() % 31 - 5;
    printf("%d ", Mesto_A[i]);
}
printf("\nB: ");

for(j = 0; j < B; ++j)
{
    Mesto_B[j] = rand() % 31 - 5;
    printf("%d ", Mesto_B[j]);
}
}

int FindInd(int *Mesto_A, int *Mesto_B, int A, int B, int *elem)
{
    printf("\n");
    bool found = false;
    for(int i = 0; i < A; ++i)
    {
        bool exists = false;
        for(int j = 0; j < B; ++j)
        {
            if(Mesto_A[i] == Mesto_B[j])
            {
                exists = true;
                break;
            }
        }

        if(!exists)
        {
            printf("[%d]", i);
            found = true;
        }
    }

    if(!found)
    {
        printf("Vse elementi vstrechautsya B\n");
    }
    return 0;
}

