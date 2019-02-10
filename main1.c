/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maiiiiin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 18:05:15 by vsmolii           #+#    #+#             */
/*   Updated: 2019/01/04 15:13:08 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

int main(int ac, char const **av)
{
	int fd;
	int fd2;
	char *line;

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);

	get_next_line(fd2, &line);
	printf("%s\n", line);

	get_next_line(fd, &line);
	printf("%s\n", line);

	get_next_line(fd2, &line);
	printf("%s\n", line);

	if (ac == 2)
		close(fd);
}
