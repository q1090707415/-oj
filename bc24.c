#include <stdio.h>

// int main(void)
// {
//     double score[3] = {0};
//     //输入
//     scanf("%lf %lf %lf",&score[0],&score[1],&score[2]);
//     //计算
//     double sum = score[0] + score[1] + score[2];
//     double avg = sum / 3.0;

//     //输出
//     printf("%.2lf %.2lf",sum , avg);

//     return 0;
// }

int main(void)
{
    double score = 0.0;
    double sum = 0.0;
    //输入并计算
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &score);
        sum += score;
    }
    printf("%.2lf %.2lf", sum, sum / 3);

    return 0;
}