/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:27 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/12 16:16:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"


/*Longueur de la ligne*/

size_t ft_strlen(const char *buf)
{
    int i;

    i = 0;
    while(buf[i])
		i++;
	return(i);
}


/*Join pour BUffer */

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = -1;
	j = 0;
	if (!s3)
		return (NULL);
	while (++i < ft_strlen(s1))
		s3[i] = s1[i];
	while (i < ft_strlen(s1) + ft_strlen(s2))
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}

