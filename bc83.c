#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
        if (n % 5 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}