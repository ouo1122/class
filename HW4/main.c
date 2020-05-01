#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mun = 0,mun1 = 0,mun5 = 0,mun10 = 0,mun50 = 0,mun100 = 0,mun500 = 0,mun1000 = 0;
    printf("請輸入金額:");
    scanf("%d\n",&mun);

    mun1 = mun%10;
    mun10 = mun/10%10;
    mun100 = mun/100%10;
    mun1000 = mun/1000;

    printf("一塊錢數:");
    printf("%d\n",mun1);
    printf("十塊錢數:");
    printf("%d\n",mun10);
    printf("一百塊錢數:");
    printf("%d\n",mun100);
    printf("一千塊錢數:");
    printf("%d\n",mun1000);


    return 0;
}
