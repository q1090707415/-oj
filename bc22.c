#include <stdio.h>

int main(void)
{
    int age = 0;
    //����
    scanf("%d", &age);
    //����
    long long second = age * 3.156e7; // 3,156 * 10���ߴη�
    //���
    printf("%lld\n", second);
    return 0;
}