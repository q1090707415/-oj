#include <stdio.h>

int main(void)
{
    int n = 0;
    //多组输入 -整型
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}