#include "testMax.h"
#include <string.h>
#include <stdio.h>

int max(int *M, int max_el, int max_index)
{
    int i;
    for(i = 1; i < 6; ++i){
        if(M[i] > max_el)
        {
            max_el = M[i];
            max_index = i;
        }
    }
    return max_el;
}


    int min(int *M, int last_ngtv, int lastNgtv_index)
{
        int i;
        for(i = 0; i < 6; ++i)
        {
           if(M[i] < 0)
            {
                last_ngtv = M[i];
                lastNgtv_index = i;
            }
        }
    return last_ngtv;
    }

    int swap(int *M,int j, int mass, int last_ngtv, int lastNgtv_index, int max_el, int max_index)
    {

        {
        for(j = 0; j < mass; ++j)//найти макс эл и посл отриц.
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
        }
        return M[j];
    }





