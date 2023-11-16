/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:04 by aperron           #+#    #+#             */
/*   Updated: 2023/11/16 15:34:00 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);

int		is_new_line(int fd, char *saves[]);

char	*get_line1(int fd, char *saves[]);

int		linelen(char *s, int stopatnl);

void	remove_line(int fd, char *saves[]);

void	add_line(int fd, char *saves[], char *read_line);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		handle_error(int nb_chars_read, char *saves[], int fd, char *read_line);

#endif
