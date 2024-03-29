/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:57 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/29 18:23:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

/* Srcs */

char	*get_next_line(int fd);
char	*ft_stock(char *stock, char *buf);
int		ft_lignefin(char *buf);

/* Utils */

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif 
