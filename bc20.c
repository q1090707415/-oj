#include <stdio.h>

int main(void)
{

    int a = 0;
    int b = 0;
    //����
    scanf("%d %d", &a, &b);
    //����
    int sum = (a % 100 + b % 100) % 100;
    //���
    printf("%d\n", sum);

    return 0;
}