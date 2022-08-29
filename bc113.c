#include <stdio.h>

int main(void)
{
    int h = 0;
    int m = 0;
    int k = 0;
    scanf("%d:%d %d", &h, &m, &k);
    h = (h + (m + k) / 60) % 24;
    m = (m + k) % 60;
    printf("%02d:%02d\n", h, m);
    return 0;
}