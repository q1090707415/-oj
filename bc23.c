#include <stdio.h>

int main(void)
{
    //����
    int second = 0;
    int h = 0; //Сʱ
    int m = 0; //����
    int s = 0; //��
    scanf("%d", &second);
    //����
    h = second / 60 / 60;
    m = second / 60 % 60;
    s = second % 60;
    //���
    printf("%d %d %d", h, m, s);
    return 0;
}