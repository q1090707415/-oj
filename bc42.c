#include <stdio.h>

int main(void)
{
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 90 && score <= 100)
            printf("Perfect\n");
    }
    return 0;
}