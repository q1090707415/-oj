#include <stdio.h>

int main(void)
{
    char arr[3][3] = {0};
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &arr[i][j]);
            //             getchar(); //处理\n
        }
    }
    //判断输赢
    char flag = 'O';
    for (i = 0; i < 3; i++)
    {
        //行
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
        {
            flag = arr[i][1];
            break;
            ;
        }
        //列
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
        {
            flag = arr[1][i];
            break;
            ;
        }
    }
    //对角线
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
    {
        flag = arr[1][1];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
    {
        flag = arr[1][1];
    }
    if (flag == 'K')
    {
        printf("KiKi wins!\n");
    }
    else if (flag == 'B')
    {
        printf("BoBo wins!\n");
    }
    else
    {
        printf("No winner!\n");
    }
    return 0;
}