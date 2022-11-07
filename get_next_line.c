/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/07 02:28:10 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char    *buf;
    int     ret;

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    ret = read(fd, buf, BUFFER_SIZE);
    if(!buf)
        return(NULL);
    if (fd < 0)
        return(NULL);
    buf[ret] = '\0';
    return(SizeBuff(buf)); 
    free(buf);  
}

char *SizeBuff(char *buf)
{
    char *buf2;
    int j;

    j = 0;
    buf2 = malloc(sizeof(char) * (BUFFER_SIZE  + 1));
    while(buf[j] && buf[j] != '\n')
        {
            buf2[j] = buf[j];
            j++;
        }
    return(buf2);
}


