/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 18:38:13 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Arg 2: %s\n", argv[2]);
		printf("Arg 1: %s\n", argv[1]);
	}
	else if (argc == 1)
		printf("Arg: %s\n", argv[1]);
	printf("%s", read_file("numbers.dict"));
}

/*
	int filedesc = open("numbers.dict", O_RDONLY);
	char c = 1;
	while (argv[2] != '\n')
	{
		c = read_file(filedesc);
		ft_putchar(c);
	}
	while (c != EOF)
	{
		c = read_file(filedesc);
		ft_putchar(c);
	}
*/