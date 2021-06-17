/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:55:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/04 10:20:25 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	len;
	int	int_min;
	int	int_max;

	len = max - min;
	i = 0;
	int_min = -2147483648;
	int_max = 2147483647;
	arr = (int *)malloc(sizeof(*arr) * (len));
	if (min >= max || min < int_min || max > int_max)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
