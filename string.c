/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 22:50:13 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_string(char *str)
{
	free(str);
}

int	get_string_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
		i++;
	return (i);
}

/* Takes "123" for example and prints the combined and prints*/
/* one hundred and twenty three */
/* num_holder holds the current char being printed */
/* Returns int to atch errors */
int	print_divided_string(char *str)
{
	//int		counter;
	char	*file_buffer;
	//
	//char	*string_pointer;
	//int		size;

	print_string(str);
	file_buffer = read_file("numbers.dict");
	/*
	//print_string(file_buffer);
	//print_string("Str: %s\n\n", str);
	size = get_string_size(str);
	counter = 0;
	while (counter < size)
	{
		//num_holder[0] = str[counter];
		//print_string(search_dict(num_holder, file_buffer));
		printf("Counter: %d\nSize: %d\n\n", counter, size);
		//num_holder[0] = str[counter];
		//print_string(string_pointer);
		counter++;
	}
	*/
	print_num_dict(file_buffer, 0, str);
	return (0);
}

/* Level is an int to control the char in the array */
void	print_num_dict(char *buffer, int level, char *full_num)
{
	char	*num_holder;

	num_holder = &full_num[level];
	print_string(search_dict(num_holder, buffer));
	if (level < get_string_size(full_num))
		print_num_dict(buffer, level + 1, full_num);
}
