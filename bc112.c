#include <stdio.h>

// int main(void)
// {
//     int n = 0;
//     long long sum = 0;
//     scanf("%d",&n);
//     int i = 0;
//     for(i = 1;i<=n;i++)
//     {
//         sum += i;
//     }
//     printf("%lld\n",sum);
//     return 0;
// }

int main(void)
{
    long long n = 0;
    long long sum = 0;
    scanf("%lld", &n);

    sum = (1 + n) * n / 2;
    printf("%lld\n", sum);
    return 0;
}