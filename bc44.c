#include <stdio.h>

// int main(void)
// {
//     int number = 0;
//     while(scanf("%d",&number) !=EOF)
//     {
//         if(number % 2 == 1)
//             printf("Odd\n");
//         else
//             printf("Even\n");
//     }
//     return 0;
// }
int main(void)
{
    int number = 0;
    while (~scanf("%d", &number))
    {
        if (number % 2 == 1)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}