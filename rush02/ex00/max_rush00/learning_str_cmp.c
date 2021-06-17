/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learning_str_cmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:32:04 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 17:43:52 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char two[] = "ABABCBC";
	char three[] = "ABCBABC";
	char four[] = "ABCBCBA";
	int a;
	int b;
	int c;
	
	a = ft_strcmp(two, three);
	b = ft_strcmp(three, four);
	c = ft_strcmp(four, two);

	printf("\n%d\n", a);
	printf("\n%d\n", b);
	printf("\n%d\n\n", c);

	return (0);
}