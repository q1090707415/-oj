#include <stdio.h>

int main(void)
{
    int score = 0;
    int i = 0;
    int sum = 0;
    int max = 0;   //������߷���0
    int min = 100; //������ͷ���100
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &score);
        sum += score;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    printf("%.2f\n", (sum - max - min) / 5.0);

    return 0;
}