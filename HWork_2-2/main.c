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
           "|side_square = %d\n", radius_circle,
           side_triangle, side_square);
    printf("________________________________\n");
    printf("opredelit' Naibol'shuyu S\n");
    printf("________________________________\n");
    double S_circle;
    double S_triangle;
    double S_square;
    int Naibolshaya_ploshad;
    S_circle = M_PI * pow(radius_circle, 2);
    printf("S_circle = %lf\n", S_circle);
    S_triangle = sqrt(3) * pow(side_triangle, 2)/4;
    printf("S_triangle = %lf\n", S_triangle);
    S_square = pow(side_square, 2);
    printf("S_square = %lf\n", S_square);
    Naibolshaya_ploshad = S_circle > S_triangle && S_circle > S_square ? S_circle :
                                               S_triangle > S_square && S_triangle > S_circle ? S_triangle :
                                                                    S_square > S_circle && S_square > S_triangle ? S_square:
    printf("________________________________\n");
    printf("________________________________\n");
    printf("Naibol'shaya S = %d\n", Naibolshaya_ploshad);
    printf("________________________________\n");
    return 0;
}
