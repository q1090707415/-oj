#include <stdio.h>

// int main(void)
// {
//     double price = 0.0; //�۸�
//     int month = 0;
//     int day = 0;
//     int flag = 0; //�Ƿ����Ż�ȯ
//     double cut = 1.0; //�ۿ�
//     double last = 0.0;
//     //����
//     scanf("%lf %d %d %d",&price,&month,&day,&flag);
//     if(month == 11 && day == 11)
//     {
//         cut = 0.7;
//         if(flag)
//         {
//            last = price*cut-50;
//         }
//         else
//         {
//            last = price*cut;
//         }
//     }
//     else if (month == 12 && day == 12)
//     {
//         cut = 0.8;
//         if(flag)
//         {
//            last = price*cut-50;
//         }
//         else
//         {
//             last = price*cut;
//         }
//     }
//     if(last < 0.0)
//         printf("%.2lf\n",0.0);
//     else
//         printf("%.2lf\n",last);

//     return 0;
// }

// int main(void)
// {
//     double price = 0.0; //�۸�
//     int month = 0;
//     int day = 0;
//     int flag = 0; //�Ƿ����Ż�ȯ
//     double cut = 1.0; //�ۿ�
//     double last = 0.0;
//     //����
//     scanf("%lf %d %d %d",&price,&month,&day,&flag);
//     if(month == 11 && day == 11)
//     {
//         price *=0.7;

//         if(flag)
//             price -=50;

//     }
//     else if (month == 12 && day == 12)
//     {
//         price *=0.8;
//         if(flag)
//             price -=50;

//     }

//     if(price < 0.0)
//         printf("%.2lf\n",0.0);
//     else
//         printf("%.2lf\n",price);

//     return 0;
// }

int main(void)
{
    double price = 0.0; //�۸�
    int month = 0;
    int day = 0;
    int flag = 0;     //�Ƿ����Ż�ȯ
    double cut = 1.0; //�ۿ�
    double last = 0.0;
    //����
    scanf("%lf %d %d %d", &price, &month, &day, &flag);
    if (month == 11 && day == 11)
    {
        cut = 0.7;
    }
    else if (month == 12 && day == 12)
    {
        cut = 0.8;
    }

    last = price * cut - flag * 50;

    if (last < 0.0)
        printf("%.2lf\n", 0.0);
    else
        printf("%.2lf\n", last);

    return 0;
}