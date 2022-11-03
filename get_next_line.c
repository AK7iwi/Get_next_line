/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:14 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/04 00:02:19 by mfeldman         ###   ########.fr       */
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
    printf("%d",ft_lignelen(buf));
    return(buf);
}


