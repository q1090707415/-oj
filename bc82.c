#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    printf("%d", (a + b - c) * d);
    return 0;
}

// int main(void)
// {
//     int num[4] = {0};
//     int i = 0;
//     int sz = sizeof(num)/sizeof(num[0]);
//     for(i=0;i<sz;i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     int result = (num[0]+num[1] -num[2])*num[3];
//     printf("%d\n",result);
//     return 0;
// }