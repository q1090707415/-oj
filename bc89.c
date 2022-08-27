#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[100] = {0};
    char repassword[100] = {0};

    scanf("%s %s", password, repassword);
    //比较两个密码是否相同 比较两个字符串
    if (strcmp(password, repassword) == 0)
        printf("same\n");
    else
        printf("different\n");
    return 0;
}