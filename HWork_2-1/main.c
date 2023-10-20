#include <math.h>
#include <stdio.h>

//вычислить формулу по картинке

int main()
{
    double x;
    printf("vvedite x=");
    scanf("%f",&x);

    const double a=(cos(2)*(x-(M_PI/6))+sqrt(2));
    const double c=1/log2(x)+pow(sin(pow(x,2)),2);
    const double d=exp(3);
    const double y=(a/c)*d;
    printf("Result %f\n",y);

    return 0;
}
