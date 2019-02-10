/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 20:25:06 by vsmolii           #+#    #+#             */
/*   Updated: 2019/01/04 15:12:17 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define FD_MAX 4864
# define BUFF_SIZE 32


# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
