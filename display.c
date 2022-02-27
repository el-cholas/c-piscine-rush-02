/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:43:36 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 18:58:59 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
}
