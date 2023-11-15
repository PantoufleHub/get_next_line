/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:10:12 by aperron           #+#    #+#             */
/*   Updated: 2023/11/15 18:12:16 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*saves[4096];
	char		*line;
	char		*read_line;
	int			nb_chars_read;

	nb_chars_read = -1;
	while (!is_new_line(fd, saves) || nb_chars_read == 0)
	{
		nb_chars_read = read(fd, read_line, BUFFER_SIZE);
		add_line(fd, read_line);
	}
	line = get_line(fd, saves);
	return (line);
}

int main(int argc, char const *argv[])
{
	// char *file1 = "test.txt";
	// char *file2 = "test2.txt";
	// int fd = open(file1, O_RDONLY);
	// int fd2 = open(file2, O_RDONLY);
	// int fds[2] = {fd, fd2};
	// char *buffer;
	// int nb_read;
	// int i = 0;

	// while (i++ < 10)
	// {
	// 	buffer = (char *)calloc(20, sizeof(char));
	// 	nb_read = read(fds[i%2], buffer, 5);
	// 	printf("Read: %s\n%i chars read\n", buffer, nb_read);
	// }

	char *arr[10];
	
	arr[0] = (char *)malloc(10);
	//arr[0][0] = 'l';
	if(1)
		printf("o%s\n", arr[0]);
	else
		printf("n%s|\n", arr[0]);
	return 0;
}