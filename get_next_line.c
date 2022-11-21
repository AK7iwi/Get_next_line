/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:35:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/21 07:27:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     ret;
    char    *stock;
    char    *ligneF;
    static char buf[BUFFER_SIZE + 1];

    if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
        return(NULL);
    stock = NULL;
    stock = ft_strjoin(stock, buf);
    ret = 1;
    while(!ft_lignefin(buf) && ret)
    {   
        ret = read(fd, buf, BUFFER_SIZE);
        if(ret == -1 )
            return(free(stock),NULL);
        buf[ret] = '\0';
        if (!ret && !stock[0])
            return(free(stock),NULL);
        stock = ft_strjoin(stock, buf);
    }
    ligneF = ft_stock(stock,buf);
    return(free(stock),ligneF);
}

char *ft_stock(char *stock, char *buf) 
{
    int i;
    int j;
    char *rest; 
    
    i = 0;
    j = 0;
    rest = malloc(sizeof(char) * (ft_strlen(stock) + 1));
    if(!rest)
        return(NULL);
    while(stock[i] && stock[i] != '\n')
        i++;
    if(stock[i] == '\n')
        i++;
    while(stock[i])    
        rest[j++] = stock[i++];
    rest[j] = '\0';
    j = 0;
    while(buf[j] && stock[i])
        buf[j++] = stock[i++];
    buf[j] = '\0';
    return(rest);
}

char *ft_ligne(char *buf)
{
    int i;
    char *ligne;
    
    i = 0;
    ligne = malloc(sizeof(char) * (ft_strlen(buf) + 1));
    if(!ligne)
        return(NULL);
    while(buf[i])
    {   
        ligne[i] = buf[i];
        i++;
    }
    ligne[i] = '\0';
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
        if(buf[i] == '\n')
            j = 1;
        i++;
    }
	return(j);
}
