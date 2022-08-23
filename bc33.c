#include <stdio.h>

// int main(void)
// {
//     int i = 0;
//     int score[5] = {0};
//     double avg = 0;
//     int sum = 0;
//     scanf("%d %d %d %d %d",&score[0],&score[1],&score[2],&score[3],&score[4]);

//     for(i = 0;i<5;i++)
//     {
//         sum += score[i];
//     }
//     avg = sum / 5.0;
//     printf("%.1lf",avg);
//     return 0;
// }
// ·¨¶þ
// int main(void)
// {
//     int i = 0;
//     int score[5] = {0};
//     double avg = 0;
//     int sum = 0;
//     for ( i = 0;i < 5;i++)
//     {
//         scanf("%d",&score[i]);
//     }

//     for(i = 0;i<5;i++)
//     {
//         sum += score[i];
//     }
//     avg = sum / 5.0;
//     printf("%.1lf",avg);
//     return 0;
// }

int main(void)
{
    int i = 0;
    int score[5] = {0};
    double avg = 0;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = sum / 5.0;
    printf("%.1lf", avg);
    return 0;
}