/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:27 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/20 23:56:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

size_t ft_strlen(char *buf)
{
    int i;

    i = 0;
	if(!buf)
		return(0);
    while(buf[i])
		i++;
	return(i);
}

