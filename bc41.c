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
    // ~ ��λȡ�� EOFΪ -1 Ϊ32��ȫ1 ȡ��Ϊ0
    while (~scanf("%d", &iq))
    {
        if (iq >= 140)
            printf("Genius");
    }
    return 0;
}