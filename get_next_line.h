/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:10:15 by aperron           #+#    #+#             */
/*   Updated: 2023/11/15 18:07:05 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char		*get_next_line(int fd);

int			is_new_line(int fd, char *saves[]);

char		*get_line(int fd, char *saves[]);

int			linelen(char *s);

char		*ft_strjoin(char *s1, char *s2);

void		remove_line(int fd, char *saves[], int len);

void		add_line(int fd, char *read_line);

#endif