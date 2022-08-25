#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    while (~scanf("%lf%lf%lf", &a, &b, &c))
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            //德塔
            double disc = b * b - 4 * a * c;
            if (disc == 0.0)
            {
                //有两个相等的实根
                if (b == 0 && c == 0)
                    printf("x1=x2=0.00\n");
                else
                    printf("x1=x2=%.2lf\n", (-b) / (2 * a));
            }
            else if (disc > 0.0)
            {
                //有2个不相等的实根
                printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
            }
            else
            {
                //有两个虚根
                double real = (-b) / (2 * a);
                double image = fabs(sqrt(-disc) / (2 * a));
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, image, real, image);
            }
        }
    }
    return 0;
}