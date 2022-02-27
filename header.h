/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:12:28 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/27 06:05:33 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

struct	s_dict
{
	char	*key;
	char	*value;
};

void				print(char c);
void				len(char *c);
struct				*dict_assign(struct s_dict *dest, char *dict_v);
void				check_error(int fun, int flag);
char				*read_file(char *file);
void				free_all(char *file, char *dict);
#endif
