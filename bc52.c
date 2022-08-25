#include <stdio.h>
#include <math.h>

// BMI = 体重的kg数 /(身高米数的平方)

int main(void)
{
    int weight = 0;
    int high = 0;

    while (~scanf("%d %d", &weight, &high))
    {
        double bmi = weight / ((high / 100.0) * (high / 100.0));
        if (bmi < 18.5)
            printf("Underweight\n");
        else if (bmi >= 18.5 && bmi <= 23.9)
            printf("Normal\n");
        else if (bmi > 23.9 && bmi <= 27.9)
            printf("Overweight\n");
        else
            printf("Obese\n");
    }

    return 0;
}