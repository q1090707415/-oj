#include <stdio.h>
#include <math.h>

int main(void)
{
    double pai = 3.1415926;
    double r = 0.0; //半径
    double v = 0.0; //体积
    //输入
    scanf("%lf", &r);

    //计算
    // v = 4.0 / 3 * pai * r * r * r;
    v = 4.0 / 3 * pai * pow(r, 3);

    //输出
    printf("%.3lf", v);
    return 0;
}