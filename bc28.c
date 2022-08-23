#include <stdio.h>

int main(void)
{
    int ch = 0;
    // EOF -end of file
    while ((ch = getchar()) != EOF)
    {

        putchar(ch + 32);
        getchar();
    }

    return 0;
}