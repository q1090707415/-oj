#include <stdio.h>

//����������1
//������������0
int is_prime(int n)
{
    //��2��n-1֮��������Գ�n
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
        //�ж�i�Ƿ�Ϊ����
        if (is_prime(i) == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}