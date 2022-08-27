#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int tmp = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d\n", sum);
    return 0;
}