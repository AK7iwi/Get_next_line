#include "get_next_line.h"


int main()
{
    int fd;
    char *str;

    fd = open("Test.txt",O_RDONLY);
    str = get_next_line(fd);
    while(str)
    {
        printf("%s", str);
        free(str);
        str = get_next_line(fd);
    }
    free(str);
    return(0);
}

/*int main()
{
    int fd;
    char *str;
    char *str1;
    char *str2;

    fd = open("Test.txt",O_RDONLY);
    str = get_next_line(fd);
    str1 = get_next_line(fd);
    str2 = get_next_line(fd);
    
    printf("%s%s%s",str,str1,str2);
 }*/






