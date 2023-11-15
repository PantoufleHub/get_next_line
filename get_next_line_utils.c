/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:10:04 by aperron           #+#    #+#             */
/*   Updated: 2023/11/15 18:09:12 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	is_new_line(int fd, char *saves[])
{
	int	index = 0;

	while (saves[fd][index])
	{
		if (saves[fd][index] == '\n')
			return (1);
		index++;
	}
	return (0);
}

char	*get_line(int fd, char *saves[])
{
	char	*line;
	int		len;
	int		index;

	len = linelen(saves[fd]);
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (!saves[fd] || !line || len == 0)
		return (NULL);
	index = 0;
	while (index < len)
	{
		line[index] = saves[fd][index];
		index++;
	}
	line[index] = '\0';
	return (line);
}

void		remove_line(int fd, char *saves[], int len);
{
	int	index;

	index = 0;
	while (saves[fd][index] != '\n' && saves[fd][index] != '\0')
	{
		
		index++;
	}
}

int	linelen(char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\n' && s[length] != '\0')
		length++;
	return (length);
}

void	add_line(int fd, char *read_line)
{
	
}