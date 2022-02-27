/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 20:47:56 by xcarroll         ###   ########.fr       */
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