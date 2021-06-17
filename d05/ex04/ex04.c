/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:10:39 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/01 13:39:27 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char	a[] = "firstfirst";
	char	b[] = "second";

	printf("%s %s\n", a, b);
	ft_strncpy(a, b, 7);
	printf("%s %s\n", a, b);
	return (0);
}
