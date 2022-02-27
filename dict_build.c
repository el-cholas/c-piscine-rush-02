/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_build.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:06:12 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/27 18:37:58 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(char c)
{
	write(1, &c, 1);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
		++i;
	return (i);
}

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

/* Where ':' is the delimiter*/
struct s_dict	*dict_assign(struct s_dict *dest, char **dict_v)
{
	int	count_col;
	int	count_row;

	count_col = 0;
	count_row = 0;
	while (dict_v[count_row][count_col] != '\0')
	{
		count_col = 0;
		while (dict_v[count_row][count_col] != ':')
		{
			dest.key[count_row][count_col] = dict_v[count_row][count_col];
			count_col++;
		}
		while ((dict_v[count_row][count_col] != '\n')
		|| (dict_v[count_row][count_col]) != '\0')
		{
			dest.value[count_row][count_col] = dict_v[count_row][count_col];
			count_col++;
		}
		count_row++;
	}
	return (dest);
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
