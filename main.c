/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 04:42:49 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 22:49:59 by xcarroll         ###   ########.fr       */
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

int	new_dict(char *new_key, char *to_convert)
{
	print_string(to_convert);
	print_string(new_key);
	return (0);
}
