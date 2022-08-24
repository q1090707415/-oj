#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     int ch = 0;
//     //存放元音字母的数组
//     char vowel[] = "AaEeIiOoUu";
//     while((ch = getchar()) != EOF)
//     {
//         //判断
//         int i = 0;
//         for(i = 0 ;i<10;i++)
//         {
//             if(ch == vowel[i])
//             {
//                 printf("Vowel\n");
//                 break;
//             }

//         }
//         if(i == 10)
//             printf("Consonant\n");
//         getchar(); //处理\n
//     }
//     return 0;
// }
int main(void)
{
    int ch = 0;
    //存放元音字母的数组
    char vowel[] = "AaEeIiOoUu";
    while ((ch = getchar()) != EOF)
    {
        //判断
        if (strchr(vowel, ch))
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar(); //处理\n
    }
    return 0;
}