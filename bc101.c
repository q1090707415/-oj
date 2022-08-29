#include <stdio.h>

int main(void)
{
    int i = 0;
    double score[5] = {0};
    for (i = 0; i < 5; i++)
    {
        //读取一个人的5科成绩
        int j = 0;
        double sum = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &score[j]);
            sum += score[j];
        }
        for (j = 0; j < 5; j++)
        {
            printf("%.1lf ", score[j]);
        }
        printf("%.1lf\n", sum);
    }

    return 0;
}