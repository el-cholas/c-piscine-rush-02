/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:12:28 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/27 20:19:26 by xcarroll         ###   ########.fr       */
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

/* conversions.c */
int				ft_atoi(const char *str);
/* dictionary.c */
struct s_dict	*dict_assign(struct s_dict *dest, char **dict_v);
/* display.c */
void			print_char(char c);
void			print_string(char *str);
void			print_number(int nb);
/* file.c */
int				get_string_size(char *str);
void			check_error(int fun, int flag);
char			*read_file(char *file);
/* main.c */
int				convert_value(char *to_convert);
int				new_dict(char *new_key, char *to_convert);
/* search.c */
char			*ft_strstr(char *str, char *to_find);
char			*search_dict(char *search, char *file_buffer);
char			*clean(char *input);
#endif