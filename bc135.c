#include <stdio.h>

//是素数返回1
//不是素数返回0
int is_prime(int n)
{
    //拿2到n-1之间的数字试除n
    int j = 0;
    for (j = 2; j <= n - 1; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 999; i++)
    {
        //判断i是否为素数
        if (is_prime(i) == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}