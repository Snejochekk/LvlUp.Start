#include <math.h>
#include <stdio.h>

//Вычислить наибольшую площадь с помощью Тернарного оператора

int main()
{
    int radius_circle = 6;
    int side_triangle = 4;
    int side_square = 7;
    printf("Dano:\n"
           "________________________________\n"
           "|radius_circle = %d\n"
           "|side_triangle = %d\n"
           "|side_square = %d\n", radius_circle, side_triangle, side_square);
    printf("________________________________\n");
    printf("opredelit' Naibol'shuyu S\n");
    printf("________________________________\n");
    int SR;
    double Sa;
    int Sd;
    int Naibolshaya_ploshad;
    SR = M_PI * pow(radius_circle, 2);
    printf("SR = %d\n", SR);
    Sa = sqrt(3) * pow(side_triangle, 2)/4;
    printf("Sa = %f\n", Sa);
    Sd = pow(side_square, 2);
    printf("Sd = %d\n", Sd);
    Naibolshaya_ploshad = SR > Sa && SR > Sd ? SR :
                                               Sa > Sd && Sa > SR ? Sa :
                                                                    Sd > SR && Sd > Sa ? Sd:
    printf("________________________________\n");
    printf("Naibol'shaya S = %d\n", Naibolshaya_ploshad);
    printf("________________________________\n");
    return 0;
}
