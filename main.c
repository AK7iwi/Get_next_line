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
*/

/*char *get_next_line(int fd)
{
    int     ret;
    char    *buf;
    char    *ligneF;
    static char *stock;

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1)); 
    if(!buf)
        return(NULL);
    if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
        return(NULL);
    while(ft_lignefin(buf) != 1)
    {   
        ret = read(fd, buf, BUFFER_SIZE);
        if(ret == -1 )
            return(NULL);
        ligneF = ft_ligne(buf);
        // printf("%s%s%s", "ligne :", ligneF, "\n");
        stock = ft_strjoin(stock, ligneF);
        // printf("%s%s%s", "stock :", stock, "\n");
    }
    ligneF = ft_ligne(stock);
    buf[ret] = '\0';
    return(free(stock),ligneF);
}


char *ft_stock(char *str) 
{
    int i;
    int j;
    char *stock; 
    
    i = 0;
    j = 0;
    stock = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if(!stock)
        return(NULL);
    while(str[i] && str[i] != '\n')
        i++;
    i++;
    while(str[i])    
        stock[j++] = str[i++];
    if(str[i] == '\n') 
        stock[j] = '\n';
    return(stock);
}

char *ft_ligne(char *str)
{
    int i;
    char *ligne;
    
    i = 0;
    ligne = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if(!ligne)
        return(NULL);
    while(str[i] && str[i] != '\n')
    {   
        ligne[i] = str[i];
        i++;
    }
    if(str[i] == '\n')
        ligne[i] = '\n';
    return(ligne);
}



int ft_lignefin(char *buf)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while(buf[i])
    {   
        if(buf[i] == '\n' || buf[i] == '\0')
            j = 1;
        i++;
    }
	return(j);
}*/

/*
size_t ft_strlen(char *buf)
{
    int i;

    i = 0;
	if(!buf)
		return(0);
    while(buf[i])
		i++;
	return(i);
}



char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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
}
*/