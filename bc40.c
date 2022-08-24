#include <stdio.h>

// int main(void)
// {
//     char buf[100] = {0};
//     //输入
//     gets(buf);
//     //统计
//     int count_a = 0;
//     int count_b = 0;
//     int i = 0;
//     while(buf[i] != '0')
//     {
//         if(buf[i] == 'A')
//             count_a++;
//         if(buf[i] == 'B')
//             count_b++;
//         i++;
//     }

//     //输出
//     if(count_a>count_b)
//     {
//         printf("A\n");
//     }
//     else if(count_a <count_b)
//     {
//         printf("B\n");
//     }
//     else
//     {
//         printf("E\n");
//     }
//     return 0;
// }
// int main(void)
// {
//     char buf[100] = {0};
//     //输入
//     gets(buf);
//     //统计
//     int flag = 0;
//     int i = 0;
//     while(buf[i] != '0')
//     {
//         if(buf[i] == 'A')
//             flag++;
//         if(buf[i] == 'B')
//             flag--;
//         i++;
//     }

//     //输出
//     if(flag > 0)
//     {
//         printf("A\n");
//     }
//     else if(flag < 0)
//     {
//         printf("B\n");
//     }
//     else
//     {
//         printf("E\n");
//     }
//     return 0;
// }

int main(void)
{
    //输入并统计
    int ch = 0;
    int flag = 0;
    while ((ch = getchar()) != '0' && ch != EOF)
    {
        if (ch == 'A')
            flag++;
        if (ch == 'B')
            flag--;
    }
    //输出
    if (flag > 0)
    {
        printf("A\n");
    }
    else if (flag < 0)
    {
        printf("B\n");
    }
    else
    {
        printf("E\n");
    }
    return 0;
}
