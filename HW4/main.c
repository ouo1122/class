#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mun = 0,mun1 = 0,mun5 = 0,mun10 = 0,mun50 = 0,mun100 = 0,mun500 = 0,mun1000 = 0;
    printf("�п�J���B:");
    scanf("%d\n",&mun);

    mun1 = mun%10;
    mun10 = mun/10%10;
    mun100 = mun/100%10;
    mun1000 = mun/1000;

    printf("�@������:");
    printf("%d\n",mun1);
    printf("�Q������:");
    printf("%d\n",mun10);
    printf("�@�ʶ�����:");
    printf("%d\n",mun100);
    printf("�@�d������:");
    printf("%d\n",mun1000);


    return 0;
}
