#include <stdio.h>

// int main(void)
// {
//     int n = 0;
//     scanf("%d",&n);
//     int odd = 0; //ÆæÊý
//     int i = 0;
//     for(i =1;i<=n;i++)
//     {
//         if(i % 2 == 1)
//             odd++;
//     }
//     printf("%d %d\n",odd,n-odd);
//     return 0;
// }

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("%d %d\n", n / 2 + 1, n / 2);
    else
        printf("%d %d\n", n / 2, n / 2);
    return 0;
}