#include "get_next_line.h"

int main()
{
    int fd;
    char *str;
    char *str1;
    char *str2;

    fd = open("Test.txt",O_RDONLY);
    str = get_next_line(fd);
    str1 = get_next_line(fd);
    str2 = get_next_line(fd);
    printf("%s,%s,%s,%s,%s", str, "\n", str1, "\n", str2);
}