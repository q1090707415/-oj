#include <stdio.h>

int main(void)
{
    int t = 0;
    while(scanf("%d",&t) != EOF)
    {
        if(t>0)
            printf("%d\n",1);
        else if(t==0)
            printf("%.1f\n",0.5);
        else
            printf("%d\n",0);
    }
    return 0;
}