/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:44:17 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 19:04:03 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

int			main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (ft_argc(argc))
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() failed\n");
			return (1);
		}
		while (read(fd, buf, BUF_SIZE))
			ft_putstr(buf);
		if (close(fd) == -1)
		{
			ft_putstr("close() failed\n");
			return (1);
		}
	}
	return (0);
}
