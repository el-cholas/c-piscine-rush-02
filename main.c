/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 01:56:53 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	read_file(int file)
{
	char	c;

	read(file, &c, 1);
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

int	main(int argc, char **argv)
{
    if (argc == 3)
	{
		printf("Arg 2: %s\n", argv[2]);
		printf("Arg 1: %s\n", argv[1]);
	}
	else if (argc == 1)
		printf("Arg: %s\n", argv[1]);
	int filedesc = open("numbers.dict", O_RDONLY);
	char c = 1;
	/*
	while (argv[2] != '\n')
	{
		c = read_file(filedesc);
		ft_putchar(c);
	}
	*/
	while (c != EOF)
	{
		c = read_file(filedesc);
		ft_putchar(c);
	}
}


