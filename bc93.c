#include <stdio.h>

int main(void)
{
    //����10����
    int i = 0;
    int num = 0;
    int positive = 0; //��������
    int negative = 0; //��������
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num >= 0)
            positive++;
        else
            negative++;
    }
    printf("positive:%d\n", positive);
    printf("negative:%d\n", negative);

    return 0;
}