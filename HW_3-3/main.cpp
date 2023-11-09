#include <math.h>
#include <stdio.h>

int main()
{
    unsigned long long numb1;
    unsigned long long numb2;
    unsigned long long numb3;
    unsigned long long k;

    printf("vvedite 3 naturalnyh chisla : ");
    scanf("%llu %llu %llu", &numb1, &numb2, &numb3);

    unsigned long long min_1 = fmin(numb2, numb3);
    unsigned long long min_2 = fmin(numb1, min_1);

    for(k = 2; k < sqrt(min_2); ++k)
    {
        unsigned long long NOD = (sqrt(min_2));
        if(NOD % k == 0){
        printf("NOD : %llu\n", NOD);
        break;
        }
        if(NOD <= 2)
        printf("oshibka..\n");
    }
    return 0;
}

