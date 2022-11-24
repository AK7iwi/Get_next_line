/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:25:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/24 22:59:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("Test.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	free (str);
	return (0);
}

/*int main()
{
    int fd;
    char *str;
    char *str1;
    char *str2;

    fd = open("Test.txt",O_RDONLY);
    str = get_next_line(fd);
    str1 = get_next_line(fd);
    str2 = get_next_line(fd);
    
    printf("%s%s%s",str,str1,str2);
 }*/