#include <stdio.h>

int main(void)
{
    int n = 0;
    //����n
    scanf("%d", &n);
    //����n�Ƴɼ�
    int i = 0;
    float score = 0.0;
    float sum = 0.0;
    float max = 0.0;   //������߷�
    float min = 100.0; //������ͷ�

    for (i = 0; i < n; i++)
    {
        scanf("%f", &score);
        sum += score;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }

    //����ɼ�
    printf("%.2f %.2f %.2f\n", max, min, sum / n);

    return 0;
}