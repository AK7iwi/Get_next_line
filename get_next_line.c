/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:35:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/19 21:14:55 by mfeldman         ###   ########.fr       */
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
    if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
        return(NULL);
    stock = ft_stock(buf);
    while(ft_lignefin(buf) != 1)
    {   
        ret = read(fd, buf, BUFFER_SIZE);
        if(ret == -1)
            return(NULL);
        ligneF = ft_ligne(buf);
        stock = ft_strjoin(stock, ligneF);
    }
    ligneF = stock;
    stock = ft_stock(buf);
    ligneF = ft_strjoin(ligneF, stock);
    buf[ret] = 0;
    return(free(buf),ligneF);
}



/* Fct pour stocker buffer plus grand*/

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
    while (str[i] && str[i] != '\n')    
        stock[j++] = str[i++];
    if(str[i] == '\n') 
        stock[j++] = '\n';
    return(stock);
}

/* Fct pour lire la ligne + */

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
        ligne[i++] = '\n';
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