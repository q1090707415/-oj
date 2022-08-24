#include <stdio.h>

// int main(void)
// {
//     int iq = 0;
//     while(scanf("%d",&iq) != EOF)
//     {
//         if(iq >= 140)
//             printf("Genius");
//     }
//     return 0;
// }
int main(void)
{
    int iq = 0;
    // ~ 按位取反 EOF为 -1 为32个全1 取反为0
    while (~scanf("%d", &iq))
    {
        if (iq >= 140)
            printf("Genius");
    }
    return 0;
}