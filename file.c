/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:06:12 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/27 19:35:45 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*Flag = 0, For dict parsing and unresolve values*/
/*Flag = 1, If the argument is not a "unsigned int"*/
void	check_error(int fun, int flag)
{
	if (flag == 0)
	{
		if (fun < 0)
		{
			write(1, "Dict Error\n", 11);
			exit (1);
		}
	}
	else
	{
		if (flag == 1)
		{
			write(1, "Error\n", 6);
			exit (1);
		}
	}
}

char	*read_file(char *file)
{
	char	*dict_memory;
	int		dict_read;
	int		dict_open;
	char	*dict;
	int		count;

	dict_open = open(file, O_RDONLY);
	check_error(dict_open, 0);
	dict_memory = (char *)malloc(sizeof(char) * 2000);
	dict_read = read(dict_open, dict_memory, 2000);
	dict = (char *)malloc(sizeof(char) * (dict_read + 1));
	count = 0;
	while (count < dict_read)
	{
		dict[count] = dict_memory[count];
		count++;
	}
	dict[count] = '\0';
	free(dict_memory);
	close(dict_open);
	return (dict);
}
