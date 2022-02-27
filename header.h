/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:12:28 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/27 18:59:28 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

struct	s_dict
{
	char	*key;
	char	*value;
};

void			print_char(char c);
void			print_string(char *str);
int				ft_atoi(const char *str);
int				len(char *str);
void			check_error(int fun, int flag);
struct	s_dict	*dict_assign(struct s_dict *dest, char **dict_v);
char			*read_file(char *file);
#endif