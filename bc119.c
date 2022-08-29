#include <stdio.h>

int main(void)
{
    char arr[8000] = {0}; // CCHNCHN
    scanf("%s", arr);
    //统计字串CHN的个数
    long long c = 0;
    long long ch = 0;
    long long chn = 0;

    char *p = arr;
    while (*p)
    {
        if (*p == 'C')
            c++;
        else if (*p == 'H')
            ch += c;
        else if (*p == 'N')
            chn += ch;

        p++;
    }
    printf("%lld\n", chn);
    return 0;
}