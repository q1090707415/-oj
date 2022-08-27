#include <stdio.h>

int main(void)
{
    int weight = 0;
    float high = 0.0;
    scanf("%d %f", &weight, &high);
    float BMI = weight / (high * high);
    if (BMI >= 18.5 && BMI <= 23.9)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}