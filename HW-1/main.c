#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
int i , x =1, y =1;
int main()
{
    while(1){
        printf("%d\n",x);
        y = y+1;
        x = x*10+y ;
        Sleep(1000);
    }
    return 0;
}
