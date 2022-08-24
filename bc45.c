#include <stdio.h>

// int main(void)
// {
//     int n1 = 0;
//     int n2 = 0;
//     int n3 = 0;
//     while(~scanf("%d%d%d",&n1,&n2,&n3))
//     {
//         int max = n1>n2?n1:n2;
//         max = max>n3?max:n3;
//         printf("%d\n",max);
//     }
//     return 0;
// }

int main(void)
{
    int num[3] = {0};
    while (~scanf("%d%d%d", &num[0], &num[1], &num[2]))
    {
        int max = 0;
        int i = 0;
        for (i = 0; i < 3; i++)
        {
            if (num[i] > max)
            {
                max = num[i];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}