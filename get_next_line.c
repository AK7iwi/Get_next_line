/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/04 17:53:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char    *buf;
    int     ret;

    buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
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
    
    i = 0;
    buf2 = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if(BUFFER_SIZE <= ft_lignelen(buf))
        buf2[i] = buf[i];
    if(BUFFER_SIZE > ft_lignelen(buf))
    {
        while(buf[i] && buf[i] != '\n')
            buf2[i] = buf[i];
    }
    return(buf2);
}
