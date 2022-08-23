#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("a=%d,b=%d", &a, &b);
    //½»»»
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);
    return 0;
}