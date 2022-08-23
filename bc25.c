#include <stdio.h>

int main(void)
{
    // ‰»Î
    int weight = 0;
    int hight = 0;
    double bmi = 0.0;
    scanf("%d %d", &weight, &hight);
    //º∆À„BMI
    bmi = weight / ((hight / 100.0) * (hight / 100.0));
    // ‰≥ˆ
    printf("%.2lf\n", bmi);

    return 0;
}