/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 08:30:10 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/14 06:13:51 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_word_size(char *str);
int	ft_word_count(char *str);
char **ft_split_whitespaces(char *str);

int main(int ac, char **av)
{
	char	**split_word;
	int 	i;

	i = 0;
	if (ac == 2)
	{
		printf("\n Number of Words: %d\n 1st wordsize: %d\n Pointer: %s\n", ft_word_count(av[1]), ft_word_size(av[1]), av[i]);
		split_word = ft_split_whitespaces(av[1]);
		if (split_word == 0)
		{
			return (0);
		}
		while (*split_word[i])
		{
			printf("\n%s\n", split_word[i]);
			i++;
		}
		free(split_word);
	}
	return (0);
}