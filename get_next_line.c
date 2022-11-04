/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/04 02:23:29 by mfeldman         ###   ########.fr       */
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
    printf("%d", ft_lignelen(buf));
    buf[ret] = '\0';
    return(buf);
}

int bufjoin()
{
    while(BUFFER_SIZE < ft_lignelen(buf))
    {
        
    }
        
}


