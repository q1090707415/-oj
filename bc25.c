#include <stdio.h>

int main(void)
{
    //����
    int weight = 0;
    int hight = 0;
    double bmi = 0.0;
    scanf("%d %d", &weight, &hight);
    //����BMI
    bmi = weight / ((hight / 100.0) * (hight / 100.0));
    //���
    printf("%.2lf\n", bmi);

    return 0;
}