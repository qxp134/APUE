#include <stdio.h>
#include <stdarg.h>
int average(int num, ...)
{
    int aver = 0;
    va_list muti;

    va_start(muti,num);

    for(int i = 0; i < num; i++)
    {
        aver += va_arg(muti,int);
    }
    return aver/num;
}
int main(int argv, char *argc[])
{
    printf("%d",average(5,1,2,3,4,5));
    return 0;
}