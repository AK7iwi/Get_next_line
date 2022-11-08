/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <michael.feldman.ca@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:04:42 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/08 02:21:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *get_next_line(int fd);
size_t ft_lignelen(char *buf);
char *ft_stock(char *buf);
char	*ft_strjoin(char *s1, char *s2);
char *ft_ligne(char *buf);

#endif 