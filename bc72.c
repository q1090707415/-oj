#include <stdio.h>

/*
int main(void)
{
    int i = 0;
    float hi = 0.0;
    float sum = 0.0;
    for(i = 0;i<5;i++)
    {
        scanf("%f",&hi);
        sum += hi;
    }
    printf("%.2f\n",sum/5.0);
    return 0;
}
*/

int main(void)
{
    int i = 0;
    float hi[5] = {0};
    float sum = 0.0;
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &hi[i]);
        sum += hi[i];
    }
    printf("%.2f\n", sum / 5.0);
    return 0;
}