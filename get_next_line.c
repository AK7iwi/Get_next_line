/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/12 15:44:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     ret;
    char    *buf;
    char    *ligneF;
    static char *stock;
    
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    ligneF = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!buf)
        return(NULL);
    if (fd < 0)
        return(NULL);
    ret = read(fd, buf, BUFFER_SIZE);
    ligneF = ft_ligne(buf);
    while(ft_lignefin(buf) != 1)
    {    
        stock = ft_ligne(buf);
        ret = read(fd, buf, BUFFER_SIZE);
        ligneF = ft_strjoin(ligneF,stock);
    }
    buf[ret] = '\0';
    return(free(buf),ligneF);
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

/* Fct pour lire la ligne + */

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

/* Fonction pour trouver la fin de la ligne*/

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