#include <stdio.h>

// int main(void)
// {
//     int x = 0;
//     int y = 0;
//     while(~scanf("%d",&x))
//     {
//         if(x < 0)
//            y = 1;
//         else if(x == 0)
//            y = 0;
//         else
//            y = -1;
//     }
//     printf("%d\n",y);
//     return 0;
// }

int main(void)
{
    int x = 0;
    int y = 0;
    while (~scanf("%d", &x))
    {
        //��Ԫ���ʽ
        x > 0 ? y = -1 : (x == 0 ? (y = 0) : (y = 1));
    }
    printf("%d\n", y);
    return 0;
}