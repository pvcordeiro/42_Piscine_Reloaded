/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:40:36 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/22 18:55:21 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

void	display_error(const char *message)
{
	write(2, message, sizeof(message));
}

int	open_file(char *filename)
{
	return (open(filename, O_RDONLY));
}

void	read_and_display(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
}

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc < 2)
		display_error("File name missing.\n");
	else if (argc > 2)
		display_error("Too many arguments.\n");
	else
	{
		fd = open_file(argv[1]);
		if (fd == -1)
			display_error("Cannot read file.\n");
		else
		{
			read_and_display(fd);
			close(fd);
		}
	}
	return (0);
}
