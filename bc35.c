#include <stdio.h>

// int main(void)
// {
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//             printf("YES\n");
//         else
//             printf("NO\n");
//         getchar(); //处理\n
//     }
//     return 0;
// }

// isalpha - 是专门用来判断一个字符是不是字母的
//是字母返回非0的值
//不是字母返回0
#include <ctype.h>
int main(void)
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //判断并输出
        if (isalpha(ch))
            printf("YES\n");
        else
            printf("NO\n");
        getchar(); //处理\n
    }

    return 0;
}