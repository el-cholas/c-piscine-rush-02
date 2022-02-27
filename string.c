/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 23:33:45 by xcarroll         ###   ########.fr       */
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
	char	*file_buffer;

	file_buffer = read_file("numbers.dict");
	print_num_dict(file_buffer, 0, str);
	return (0);
}

/* Level is an int to control the char in the array */
/* in_string is the whole string inputted in the main */
void	print_num_dict(char *buffer, int level, char *in_string)
{
	char	num_holder[2];
	int		size;

	size = 0;
	while (in_string[size] != '\0')
		size++;
	num_holder[0] = in_string[level];
	print_string(search_dict(num_holder, buffer));
	if (level < size - 1)
	{
		print_string(" ");
		print_num_dict(buffer, level + 1, in_string);
	}
}
