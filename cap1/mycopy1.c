#include "apue.h"
#define MAX_SIZE 4096

int main(void)
{
    char buf[MAX_SIZE];
    int n;

    while((n = read(STDIN_FILENO,buf,MAX_SIZE)) > 0)
        if((write(STDOUT_FILENO,buf,n) != n))
            err_sys("write error");
    
    if(n < 0)
        err_sys("read error");
        
     exit(0);
}