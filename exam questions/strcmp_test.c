/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:29:37 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/15 13:48:34 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int store;
	
	while ((*s1 || *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	store = *s1 - *s2;
	if (store > 0)
		return (1);
	else if (store < 0)
		return (-1);
	else 
		return (0); 
}

int main()
{
	char *str1 = "hej123";
	char *str2 = "hej123";
	printf("%d\n", ft_strcmp(str1, str2));
}