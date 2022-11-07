/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/08 00:25:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     ret;
    char    *buf;
    /*char    *ligne;*/
    /*static char *stock;*/
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    ret = read(fd, buf, BUFFER_SIZE);
    if(!buf)
        return(NULL);
    if (fd < 0)
        return(NULL);
    buf[ret] = '\0';
    /* ligne = ft_strjoin(stock, buf);*/
    return(ft_stock(buf));
    free(buf);  
}

/* Fct pour stocker */
char *ft_stock(char *buf)
{
    int i;
    int j;
    char *fin;
    
    i = 0;
    j = 0;
    fin = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    while(buf[i] && buf[i] != '\n')
        i++;  
    i += 1;
    while (BUFFER_SIZE - i > 0 && buf[i] && buf[i] != '\n')
    {     
        fin[j] = buf[i];
        i++;
        j++;
    }
    return(fin);
}


