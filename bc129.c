#include <stdio.h>

int max3(int x, int y, int z)
{
    int max = x > y ? x : y;
    return (max > z ? max : z);
}

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    float m = 0.0;
    m = ((float)max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%.2f\n", m);
    return 0;
}