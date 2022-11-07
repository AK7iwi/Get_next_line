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

size_t ft_lignelen(char *buf)
{
    int i;

    i = 0;
    while(buf[i] && buf[i] != '\n')
		i++;
	return(i);
}

/*Join pour BUffer <*/

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(sizeof(char) * (ft_lignelen(s1) + ft_lignelen(s2) + 1));
	i = -1;
	j = 0;
	if (!s3)
		return (NULL);
	while (++i < ft_lignelen(s1))
		s3[i] = s1[i];
	while (i < ft_lignelen(s1) + ft_lignelen(s2))
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}

