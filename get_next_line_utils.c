/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:19:30 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/30 01:22:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *buf)
{
	int		i;

	i = 0;
	if (!buf)
		return (0);
	while (buf[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	char	*s4;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s4 = ft_ligne(s2);
		return (s4);
	}
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
	free (s1);
	return (s3);
}
