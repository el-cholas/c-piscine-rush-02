/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:05:43 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/27 22:20:18 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/* This doesn't use the struct, since idk how to use it.. */
/* Won't work if search value doesn't exist, need to handle that */
char	*search_dict(char *search, char *file_buffer)
{
	char	*buf_string;
	char	*returned;
	int		buf_size;

	buf_size = get_string_size(ft_strstr(file_buffer, search));
	buf_string = (char *)malloc(sizeof(char) * buf_size);
	buf_string = ft_strstr(file_buffer, search);
	returned = clean(buf_string);
	//free_string(buf_string);
	return (returned);
}

/* This cleans input string to remove everything after new line */
/* or end of buffer */
char	*clean(char *input)
{
	int		size_till_space;
	int		size_till_end;
	char	*cleaned;
	int		counter;

	size_till_space = 0;
	while (input[size_till_space] != ' ')
		size_till_space++;
	size_till_space++;
	size_till_end = 0;
	while (input[size_till_end] != '\0' && input[size_till_end] != '\n')
		size_till_end++;
	cleaned = malloc(sizeof(char) * size_till_end - size_till_space);
	counter = 0;
	while (counter < size_till_end - size_till_space)
	{
		cleaned[counter] = input[counter + size_till_space];
		counter++;
	}
	return (cleaned);
}
