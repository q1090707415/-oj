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

// isupper -�ж�һ����ĸ�Ƿ��Ǵ�д��ĸ
// islower - �ж�һ���ַ��Ƿ���Сд��ĸ
// toupper - ��һ��Сд��ĸת���ɴ�д��ĸ
// tolower - ��һ����д��ĸת����Сд��ĸ
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