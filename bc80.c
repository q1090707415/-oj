#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100] = {0};
    char password[100] = {0};
    while (~scanf("%s %s", name, password))
    {
        //�����ַ����Ƚ�
        if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}