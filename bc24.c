#include <stdio.h>

// int main(void)
// {
//     double score[3] = {0};
//     //����
//     scanf("%lf %lf %lf",&score[0],&score[1],&score[2]);
//     //����
//     double sum = score[0] + score[1] + score[2];
//     double avg = sum / 3.0;

//     //���
//     printf("%.2lf %.2lf",sum , avg);

//     return 0;
// }

int main(void)
{
    double score = 0.0;
    double sum = 0.0;
    //���벢����
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &score);
        sum += score;
    }
    printf("%.2lf %.2lf", sum, sum / 3);

    return 0;
}