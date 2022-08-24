#include <stdio.h>

// int main(void)
// {
//     int ch = 0;
//     while(~scanf("%c\n",&ch))
//     {
//         if(ch >= 'A' && ch <= 'Z')
//             printf("%c\n",ch+32);
//         else if(ch >= 'a' && ch <= 'z')
//             printf("%c\n",ch-32);
//     }
//     return 0;
// }

// isupper -判断一个字母是否是大写字母
// islower - 判断一个字符是否是小写字母
// toupper - 把一个小写字母转换成大写字母
// tolower - 把一个大写字母转换成小写字母
#include <ctype.h>

int main(void)
{
    int ch = 0;
    while (~scanf("%c\n", &ch))
    {
        if (isupper(ch))
            printf("%c\n", tolower(ch));
        else if (islower(ch))
            printf("%c\n", toupper(ch));
    }
    return 0;
}