#include <stdio.h>

// int main(void)
// {
//     int n = 0;
//     int m = 0;
//     int arr[10][10] = {0};
//     scanf("%d %d",&n,&m);
//     int i = 0;
//     int j = 0;
//     for(i = 0;i < n;i++)
//     {
//         for(j = 0;j < m;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     //´òÓ¡
//      for(i = 0;i < n;i++)
//     {
//         for(j = 0;j < m;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(void)
{
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}