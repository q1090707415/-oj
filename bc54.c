#include <stdio.h>

int main(void)
{
    int y = 0;
    int m = 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (~scanf("%d%d", &y, &m))
    {
        //�ж��Ƿ�Ϊ����
        int day = days[m - 1];
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            if (m == 2)
            {
                day += 1;
            }
        }
        printf("%d\n", day);
    }
    return 0;
}