#include <stdio.h>

// 12345
//  ------
//  1 2345 12345/10000 12345%10000
//  12 345 12345/1000 12345%1000
//  123 45 12345/100 12345%100
//  1234 5 12345/10 12345%10

int main(void)
{
    int i = 0;
    for (i = 10000; i <= 99999; i++)
    {
        //�ж��Ƿ�ΪLily Number
        int j = 0;
        int sum = 0;
        for (j = 10; j <= 10000; j *= 10)
        {
            sum += (i / j) * (i % j);
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}