#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     int ch = 0;
//     //���Ԫ����ĸ������
//     char vowel[] = "AaEeIiOoUu";
//     while((ch = getchar()) != EOF)
//     {
//         //�ж�
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
//         getchar(); //����\n
//     }
//     return 0;
// }
int main(void)
{
    int ch = 0;
    //���Ԫ����ĸ������
    char vowel[] = "AaEeIiOoUu";
    while ((ch = getchar()) != EOF)
    {
        //�ж�
        if (strchr(vowel, ch))
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar(); //����\n
    }
    return 0;
}