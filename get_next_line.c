/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/09 20:43:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     ret;
    char    *buf;
    /*char    *ligne;
    static char *stock;*/
    
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    ret = read(fd, buf, BUFFER_SIZE);
    if(!buf)
        return(NULL);
    if (fd < 0)
        return(NULL);
    buf[ret] = '\0'; 
    return(buf);  
}

/* Fct pour stocker buffer plus grand*/

char *ft_stock(char *buf)
{
    int i;
    int j;
    char *stock;
    
    i = 0;
    j = 0;
    stock = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    while(buf[i] && buf[i] != '\n')
        i++;
    i++;
    while (BUFFER_SIZE - i > 0 && buf[i])
    {     
        stock[j] = buf[i];
        i++;
        j++;
    }
    return(stock);
}

/* Fct pour lire la ligne */

char *ft_ligne(char *buf)
{
    int i;
    char *ligne;

    i = 0;
    ligne = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    while(buf[i] && buf[i] != '\n')
    {    
        ligne[i] = buf[i];
        i++;
    }
	return(ligne);
}

char *ft_GBuffer(char *)
{
    char *dest;
    char *stock;
    
    dest = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    stock = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    dest = ft_ligne(buf);
    if(BUFFER_SIZE > ft_ligne(buf))
        stock = ft_stock(buf);
}
