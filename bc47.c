#include <stdio.h>

// int main(void)
// {
//     int ch = 0;
//     while(scanf("%c\n",&ch) != EOF)
//     {
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//         {
//             printf("%c is an alphabet.\n",ch);
//         }
//         else
//         {
//             printf("%c is not an alphabet.\n",ch);
//         }
//     }
//     return 0;
// }
#include <ctype.h>
int main(void)
{
    int ch = 0;
    while (scanf("%c\n", &ch) != EOF)
    {
        if (isalpha(ch))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}