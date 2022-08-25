#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (~scanf("%d%d%d", &a, &b, &c))
    {
        //是三角形
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {

            //等边三角形
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            //等腰三角形
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            {
                printf("Isosceles triangle!\n");
            }
            //其余三角形
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        //不是三角形
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}