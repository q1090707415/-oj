#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int sum = 0;
    // %x ��16���Ƶ����ݸ�ʽ
    // %o ��8���Ƶ����ݸ�ʽ

    scanf("%x %o", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
    return 0;
}