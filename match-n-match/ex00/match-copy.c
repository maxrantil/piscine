/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match-copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:30:36 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/05 20:11:15 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[a] || (to_find[a] == '\0' && str[i] != '\0'))
		{
			to_find[a] = str[i];
			i++;
			a++;
		}
		if (str[i] != to_find[a])
			a = 0;
		i++;
	}
	//if (to_find[a] == '\0')
		//return (to_find);
	return (0);
}
int	match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s1[i] != '\0')
	{
		if (s2[i] == '*')
		{
			s2[i] = s1[i];
			ft_strstr(&s1[i], &s2[i]);
		}
		i++;
	}
	if (s1 == s2)
		return (1);
	else
		return (0);
}

int main()
{
	char j[] = "hejsan hoppsan";
	char k[] = "hejsan *";
	printf("%d\n", match(j ,k));
	printf("%s\n%s\n", j, k);
	
	return (0);
}
