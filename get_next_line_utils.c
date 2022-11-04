/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:39:23 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/03 18:30:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


/*Longueur de la ligne*/

int ft_lignelen(char *buf)
{
    int i;

    i = 0;
    while(buf[i] && buf[i] != '\n')
        i++;
    return(i);
}

