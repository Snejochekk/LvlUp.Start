#include "elemTest.h"
#include <stdio.h>

int FindInd(int *Mesto_A, int *Mesto_B, int *Mesto_C, int a, int b)
{
printf("\n");
int k = 0;
bool found = false;
    for(int i = 0; i < a; ++i)
    {
        bool exists = false;
        for(int j = 0; j < b; ++j)
        {
            if(Mesto_A[i] == Mesto_B[j])
            {
                exists = true;
                break;
            }
        }

        if(!exists)
        {
            Mesto_C[k] = i;
            ++k;
            found = true;
        }
}
    return k;
}

int el(int *Mesto_b)
{
    for(int i = 0; i < Mesto_b[6]; ++i)
    {
        return i;
    }
}
