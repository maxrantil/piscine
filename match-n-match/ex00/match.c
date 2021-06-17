/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:30:36 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/05 19:41:06 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
	{
		if (*s2 == '*')
		{
			*s2 = *s1;
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}

int main()
{
	char j[] = "hejsan hoppsan";
	char k[] = "hejsan *oppsan";
	printf("%d\n", match(j ,k));
	printf("%s, %s\n", j, k);
	
	return (0);
}
