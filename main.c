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

// int main()
// {
//     int fd;
//     char *str;
//     char *str1;
//     char *str2;

//     fd = open("Test.txt",O_RDONLY);
//     str = get_next_line(fd);
//     str1 = get_next_line(fd);
//     str2 = get_next_line(fd);
    
//     printf("%s%s%s",str,str1,str2);
// }

/*
int main()
{
    char *str1;
    char *str2;

    str1 = "ofeoj\nojrhhhhhhhhhhh\norgg";
    str2 = ft_strlen(str1);
    printf("%s", str2);
    free(str2);
}

char *ft_stock(char *str) 
{
    int i;
    int j;
    char *stock; 
    
    i = 0;
    j = 0;
    stock = malloc(sizeof(char) * (ft_strlen(str)) + 1 );
    if(!stock)
        return(NULL);
    while(str[i] && str[i] != '\n')
        i++;
    i++;
    while (str[i] && str[i] != '\n')    
        stock[j++] = str[i++];
    if(str[i] == '\n') 
        stock[j++] = '\n';
    return(stock);
}

size_t ft_strlen(char *buf)
{
    int i;

    i = 0;
    while(buf[i])
		i++;
	return(i);
}

char *ft_ligne(char *buf)
{
    int i;
    char *ligne;
    
    i = 0;
    ligne = malloc(sizeof(char) * (ft_strlen(buf)));
    if(!ligne)
        return(NULL);
    while(buf[i] && buf[i] != '\n')
    {   
        ligne[i] = buf[i];
        i++;
    }
    if(buf[i] == '\n')
        ligne[i++] = '\n';
    return(ligne);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	i = -1;
	j = 0;
	if (!s3)
		return (NULL);
	while (++i < ft_strlen(s1))
		s3[i] = s1[i];
	while (i < ft_strlen(s1) + ft_strlen(s2))
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}*/