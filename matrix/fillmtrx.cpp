#include "fillmtrx.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void fill(int a, int *mass) {
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < a; ++j) {
            mass[i * a + j] = rand() % 10 - 1;
        }
    }
}

void printM(int a, int *mass) {
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < a; ++j) {
            printf("%2d", mass[i * a + j]);
        }
        printf("\n");
    }
}

void swapRows(int a, int *mass, int k)
{
    for(int i = 0; i < a; ++i)
    {
        int temp = mass[i * a +k];
        mass[i * a +k] = mass[k * a +i];
        mass[k * a +i] = temp;
}
        for(int i = 0; i < a; ++i)
          {
              for(int j = 0; j < a; ++j)
              {
                  printf("%2d", mass[i * a + j]);
              }
              printf("\n");
          }
      }

