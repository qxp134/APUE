#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argv,char* argc[])
{
    int fd = open(argc[1], O_RDONLY);
    int offset = lseek(fd, 0, SEEK_END);
    printf("file descriptor: %d   file length: %d\n", fd, offset);
}