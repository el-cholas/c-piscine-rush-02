/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 23:40:42 by yzaytoun         ###   ########.fr       */
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
		error = print_divided_string(argv[1]);
	if (error)
		print_string("Error\n");
}

int	new_dict(char *key, char *new_value)
{
	int		count_1;
	int		count_2;
	char	*file_buffer;
	char	*file;

	count_1 = 0;
	count_2 = 0;
	file_buffer = (char*)malloc(sizeof(char) * 2000);
	file = read_file("numbers.dict");
	while (file[count_1] != '\0')
	{
		file_buffer[count_1] = new_values[count_1];
		++count_1;
	}
	file_buffer[count_1] = '\n';
	++count_1;
	while (key[count_2] != '\0')
	{
		file_buffer[count_2] = key[count_2];
		++count_2;
	}
	file_buffer[count_2] = ':';
	++count_2;
	file_buffer[count_2] = ' ';
	++count_2;
	while (new_values[count_2] != '\0')
	{
		file_buffer[count_2] = new_value[count_2];
		++count_2;
	}

	print_string(to_convert);
	print_string(new_key);
	free(file_buffer);
	return(0);
}
