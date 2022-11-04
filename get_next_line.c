/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/04 22:22:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char    *buf;
    int     ret;

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!buf)
        return(NULL);
    if (fd < 0)
        return(NULL);
    ret = read(fd, buf, BUFFER_SIZE);
    buf[ret] = '\0';
    return(SizeBuff(buf));   
}

char *SizeBuff(char *buf)
{
    static char *buf2;
    int i;
    int j;

    i = BUFFER_SIZE;
    j = 0;
    buf2 = malloc(sizeof(char) * (BUFFER_SIZE  + 1));
    if (i < ft_lignelen(buf))
        buf2 = buf;
    while(buf[j] && buf[j] != '\n')
        {
            buf2[j] = buf[j];
            j++;
        }
    return(buf2);
}
