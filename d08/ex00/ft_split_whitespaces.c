/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:35:37 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/14 06:15:13 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	int		word_count;
	int		words_entered;
	int		i;
	char	**words;
	char	*word;

	i = 0;
	words_entered = 0;
	word_count = ft_word_count(str);
	words = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (words_entered < word_count)
	{
		word = (char *)malloc(sizeof(char) * (ft_word_size(str) + 1));
		while ((str[0] == '\t' || str[0] == '\n' || str[0] == ' ') && str[0] != '\0')
			str++;
		while (!((str[0] == '\t' || str[0] == '\n' || str[0] == ' ') && str[0] != '\0'))
			word[i++] = *str++;
		word[i] = '\0';
		words[words_entered++] = word;
		i = 0;
	}
	words[word_count] = 0;
	return (words);
}

int	ft_word_count(char *str)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ') && str[i] != '\0')
			i++;
		while (!((str[i] == '\t' || str[i] == '\n' || str[i] == ' ')) && str[i] != '\0')
			i++;
		while ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ') && str[i] != '\0')
			i++;
		word_count++;
	}
	return (word_count);
}

int	ft_word_size(char *str)
{
	int i;

	i = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ') && str[i] != '\0')
		str++;
	while (!((str[i] == '\t' || str[i] == '\n' || str[i] == ' ')) && str[i] != '\0')
		i++;
	return (i);
}
