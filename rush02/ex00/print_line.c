/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:13:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/13 08:40:24 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

#define BUF_SIZE 4000

int		main(int argc, char **argv)
{
	char buf[BUF_SIZE];
	char str[BUF_SIZE];
	int i;
	
	i = 0;
	/*char rush00str[] = "[rush-00]";
	char rush01str[] = "[rush-01]";*/
	//len = ft_strlen(argv[0]);
	//buf = (char *)malloc(sizeof(buf) * (20 + 1));
	ft_putchar('\n');
	while (read(0, &buf, 1))
	{
		str[i] = *buf;
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}