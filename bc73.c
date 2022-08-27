#include <stdio.h>

// int main(void)
// {
//     int score = 0;
//     scanf("%d",&score);
//     if(score >= 10)
//         printf("Danger++\n");
//     else if(score >=4 && score <=9)
//         printf("Danger\n");
//     else if(score >=0 && score <=3)
//         printf("Good\n");
//     return 0;
// }
#include <stdio.h>
int main(void)
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        switch (score)
        {
        case 0:
        case 1:
        case 2:
        case 3:
            printf("Good\n");
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Danger\n");
            break;

        default:
            printf("Danger++\n");
            break;
        }
    }
    return 0;
}
