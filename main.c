#include "get_next_line.h"

int main()
{
    int fd;
    char *str;

    fd = open("Test.txt",O_RDONLY);
    str = get_next_line(fd);
    printf("%s",str);
}