/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:37:16 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/16 12:49:22 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, &(*str++), 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char *ft_str_rev(char *str)
{
	int i;
	int j;
	int len;
	char *ptr;
	char temp[50];

	i = 0;
	len = ft_strlen(str);
	j = len;
	while(i < j)
	{
		temp[i] = str[len -1];
		i++;
		len--;
	}
	temp[i] = '\0';
	ptr = temp;
	return ptr;
}

int main()
{
	char k[] = "Revese this";

	ft_putstr(ft_str_rev(k));
	write(1, "\n", 1);
	return 0;
}