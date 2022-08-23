#include <stdio.h>

int main(void)
{

    int a = 0;
    int b = 0;
    //ÊäÈë
    scanf("%d %d", &a, &b);
    //¼ÆËã
    int sum = (a % 100 + b % 100) % 100;
    //Êä³ö
    printf("%d\n", sum);

    return 0;
}