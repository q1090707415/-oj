#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[50] = {0};
    scanf("%d", &n);
    int flag1 = 0; //ÉýÐò
    int flag2 = 0; //½µÐò
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i] > arr[i - 1])
            {
                flag1 = 1;
            }
            else
            {
                flag2 = 1;
            }
        }
    }
    if (flag1 + flag2 == 1)
        printf("sorted\n");
    else
        printf("unsorted\n");

    return 0;
}