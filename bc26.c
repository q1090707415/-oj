#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    double circumference = 0.0;
    double area = 0.0;
    //����
    scanf("%lf %lf %lf", &a, &b, &c);
    //����
    circumference = a + b + c;
    double p = circumference / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c)); //���׹�ʽ
    //���
    printf("circumference=%.2lf area=%.2lf", circumference, area);

    return 0;
}