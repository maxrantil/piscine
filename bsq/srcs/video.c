/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:39:39 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/14 18:53:51 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	matrix(int i, int j)
{
	cache(clone of the matrix) = input -> fill matrix (with for loop)
	int result;

	result = 0;
	i = i;
	while (i < matrix.length)
	{
		i++;
		j = 0
		while (j < matrix[i].length)
		{
			j++;
			if (i == 0 || j == 0)
			{
				cache[i][j];
			}
			else if (matrix[i][j] > 0)
			{
				cache[i][j] = 1 + min(cache[i][j - 1], cache[i - 1][j], cache[i - 1][j - 1])
			}
			if (cache[i][j] > result)
			result = cache[i][j];
		}
	}
	return (result);
}