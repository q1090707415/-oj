#include <stdio.h>

/*
复杂度过高
int main(void)
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld",&n,&m);
    long long max = n>m?m:n;//假设n和m的较小值为最大公约数
    long long min = n>m?n:m; //假设n和m的较大值为最小公倍数
    while(1)
    {
        if(n % max == 0 && m % max == 0)
        {
            break;
        }
        max--;
    }
    while(1)
    {
        if(min % n == 0 && min % m == 0)
        {
            break;
        }
        min++;
    }

    printf("%lld\n",min+max);
    return 0;
}
*/

//辗转相除法
// int main(void)
// {
//     long long n = 0;
//     long long m = 0;
//     scanf("%lld %lld",&n,&m);
//     long long n2 = n;
//     long long m2 = m;

//     long long tmp = 0;
//     long long max = 0;
//     long long min = 0;
//     while(tmp = n%m)
//     {
//        n = m;
//        m = tmp;
//     }

//     max = m;
//     //最小公倍数 = n * m /max;
//     min = n2 * m2 / max;
//     printf("%lld\n",min+max);
//     return 0;
// }

int main()
{
    long long a, b, m, n, c;
    scanf("%lld %lld", &a, &b);
    c = a * b;
    while (a && b)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    m = a > b ? a : b;
    printf("%lld\n", m + c / m);
}