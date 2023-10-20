#include <math.h>
#include <stdio.h>

//Вычислить наибольшую площадь с помощью Тернарного оператора

int main()
{
    int R = 6;
    int a = 4;
    int d = 7;
    int SR;
    double Sa;
    int Sd;
    int Naibolshaya_ploshad;
    printf("Dano:\n"
           "________________________________\n"
           "radius kruga        |R = %d\n"
           "storona treugolnika |a = %d\n"
           "storona kvadrata    |d = %d\n", R,a,d);
    printf("________________________________\n");
    printf("opredelit' Naibol'shuyu S\n");
    printf("________________________________\n");
    SR = M_PI * pow(R,2);
    printf("SR = %d\n", SR);
    Sa = sqrt(3) * pow(a,2)/4;
    printf("Sa = %f\n",Sa);
    Sd = pow(d,2);
    printf("Sd = %d\n", Sd);
    Naibolshaya_ploshad = SR>Sa?SR:Sd;
    printf("________________________________\n");
    printf("Naibol'shaya S = %d\n", Naibolshaya_ploshad);
    printf("________________________________\n");
    return 0;
}
