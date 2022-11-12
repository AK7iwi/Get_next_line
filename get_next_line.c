/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/12 13:46:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     ret;
    char    *buf;
    static char    *ligneF;
    /*char *stock;*/
    
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!buf)
        return(NULL);
    ret = read(fd, buf, BUFFER_SIZE);
    if (fd < 0)
        return(NULL);
    ligneF = ft_ligne(buf);
    /*stock = ft_stock(buf);*/
    buf[ret] = '\0';
    return(ligneF);
}

/*Fct qui add la variable statique + fonction qui dit quand la ligne est fini+ fonction qui dit quand il ya une nouvelle ligne/ quand le fichier est lu 
char *ft_add(char *ligneF ,char *buf)
{
    
}*/

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