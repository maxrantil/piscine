/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:32:49 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/04 09:18:26 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return (arr);
}
