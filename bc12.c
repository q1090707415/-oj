#include <stdio.h>

1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 int main(void)
{
    // ����һ���ַ�
    char ch = 0;
    ch = getchar();

    //���������
    int i = 0;
    //ûѭ��һ�δ�ӡһ��
    //ÿһ���ɿո���ַ�
    for (i = 0; i < 5; i++)
    {
        int j = 0;
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        //�ַ�
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}