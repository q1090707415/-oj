#include <stdio.h>
#include <math.h>

int main(void)
{
    double pai = 3.1415926;
    double r = 0.0; //�뾶
    double v = 0.0; //���
    //����
    scanf("%lf", &r);

    //����
    // v = 4.0 / 3 * pai * r * r * r;
    v = 4.0 / 3 * pai * pow(r, 3);

    //���
    printf("%.3lf", v);
    return 0;
}