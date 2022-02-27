/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 20:34:14 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	error;

	error = 0;
	if (argc == 3)
		error = new_dict(argv[1], argv[2]);
	else if (argc == 2)
		error = convert_value(argv[1]);
	if (error)
		print_string("Error\n");
	print_string(search_dict("60", read_file("numbers.dict")));
}

/* Return int to see if there are errors */
int	convert_value(char *to_convert)
{
	print_string(to_convert);
	return (0);
}

int	new_dict(char *new_key, char *to_convert)
{
	print_string(to_convert);
	print_string(new_key);
	return (0);
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