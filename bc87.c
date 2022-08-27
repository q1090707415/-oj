#include <stdio.h>

int main(void)
{
    int n = 0;
    //接收n
    scanf("%d", &n);
    //接收n科成绩
    int i = 0;
    float score = 0.0;
    float sum = 0.0;
    float max = 0.0;   //假设最高分
    float min = 100.0; //假设最低分

    for (i = 0; i < n; i++)
    {
        scanf("%f", &score);
        sum += score;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }

    //输出成绩
    printf("%.2f %.2f %.2f\n", max, min, sum / n);

    return 0;
}