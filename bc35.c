#include <stdio.h>

// int main(void)
// {
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//             printf("YES\n");
//         else
//             printf("NO\n");
//         getchar(); //����\n
//     }
//     return 0;
// }

// isalpha - ��ר�������ж�һ���ַ��ǲ�����ĸ��
//����ĸ���ط�0��ֵ
//������ĸ����0
#include <ctype.h>
int main(void)
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //�жϲ����
        if (isalpha(ch))
            printf("YES\n");
        else
            printf("NO\n");
        getchar(); //����\n
    }

    return 0;
}