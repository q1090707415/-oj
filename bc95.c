#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int score = 0;
    int max = 0;   //�������ֵ
    int min = 100; //������Сֵ
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    printf("%d\n", max - min);
    return 0;
}