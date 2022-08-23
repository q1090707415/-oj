#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date); //%4d就是读取4位整数
    printf("year=%d\n", year);
    printf("month=%02d\n", month); //输出不够2位时，左边拿0填充
    printf("date=%02d\n", date);
    ? ?
 ? ?return 0;
}