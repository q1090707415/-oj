#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (~scanf("%d%d%d", &a, &b, &c))
    {
        //��������
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {

            //�ȱ�������
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            //����������
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            {
                printf("Isosceles triangle!\n");
            }
            //����������
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        //����������
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}