#include <stdio.h>

// int main(void)
// {
//     int n = 0;
//     while(~scanf("%d",&n))
//     {
//         int i = 0;
//         for(i=0;i<n;i++)
//         {
//             int j = 0;
//             //��ӡһ��
//             //�ո�
//             for(j = 0;j<n-1-i;j++)
//             {
//                 printf("  ");
//             }
//             // *
//             for(j = 0 ;j<= i;j++)
//             {
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            //��ӡһ��
            //�ո�
            for (j = 0; j < n; j++)
            {
                if (i + j < n - 1)
                    printf("  ");
                else
                    printf("* ");
            }

            printf("\n");
        }
    }
    return 0;
}