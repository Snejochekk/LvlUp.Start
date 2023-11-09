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

    for(k = 2; k < fmin(numb1, fmin(numb2, numb3)); ++k)
    sqrt(k);
    for(unsigned long long i = 2; i < sqrt(k); ++i)
    {
        printf("NOK : %llu\n", i);
        break;
    }
    printf("oshibka..\n");

    return 0;
}

