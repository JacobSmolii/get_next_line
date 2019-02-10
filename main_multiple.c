/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_multiple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 12:43:40 by vsmolii           #+#    #+#             */
/*   Updated: 2019/01/09 01:27:51 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int fd;
	int fd_2;
	char *line;

	i = 1;
	fd = open(av[1], O_RDONLY);
	while ((get_next_line(fd, &line)) == 1)
	{
		printf("[%d] %s\n", i++, line);
		free(line);
	}
	close(fd);
	fd_2 = open(av[2], O_RDONLY);
	while ((get_next_line(fd_2, &line)) == 1)
	{
		printf("[%d] %s\n", i++, line);
		free(line);
	}
	close(fd_2);
	return (ac);
}
