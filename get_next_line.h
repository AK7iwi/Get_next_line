/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:47:57 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/12 13:43:08 by mfeldman         ###   ########.fr       */
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
char *ft_add(char *ligneF ,char *buf);
int ft_lignefin(char *buf);

#endif 