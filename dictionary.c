/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:59:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 22:42:46 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* Where ':' is the delimiter*/
struct s_dict	*dict_assign(struct s_dict *dest, char **dict_v)
{
	int	count_col;
	int	count_row;

	count_col = 0;
	count_row = 0;
	// Only to use dict_v so I can compile.
	print_string(dict_v[0]);
	/*
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
	*/
	return (dest);
}
