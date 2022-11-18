/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/18 17:42:51 by mfeldman         ###   ########.fr       */
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
    if(!buf)
        return(NULL);
    if (fd < 0 || BUFFER_SIZE <= 0)
        return(NULL);
    stock = ft_stock(buf);
    while(ft_lignefin(buf) != 1)
    {   
        ret = read(fd, buf, BUFFER_SIZE);
        if(ret == -1)
            return(NULL);
        ligneF = ft_ligne(buf);
        stock = ft_strjoin(stock, ligneF);
        buf[ret] = '\0';
    }
    return(free(buf),stock);
}

/* Fct pour stocker buffer plus grand*/

char *ft_stock(char *buf) 
{
    int i;
    int j;
    char *stock; 
    
    i = 0;
    j = 0;
    stock = malloc(sizeof(char) * (ft_strlen(buf) + 1));
    if(!stock)
        return(NULL);
    while(buf[i] && buf[i] != '\n')
        i++;
    i++;
    while (buf[i] && buf[i] != '\n')    
        stock[j++] = buf[i++];
    if(buf[i] == '\n') 
        stock[j++] = '\n';
    stock[j] = 0;
    return(stock);
}

/* Fct pour lire la ligne + */

char *ft_ligne(char *buf)
{
    int i;
    char *ligne;
    
    i = 0;
    ligne = malloc(sizeof(char) * (ft_strlen(buf) + 1));
    if(!ligne)
        return(NULL);
    while(buf[i] && buf[i] != '\n')
    {   
        ligne[i] = buf[i];
        i++;
    }
    if(buf[i] == '\n')
        ligne[i++] = '\n'; 
    ligne[i] = 0;
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
        if(buf[i] == '\n' || buf[i] == '\0')
            j = 1;
        i++;
    }
	return(j);
}