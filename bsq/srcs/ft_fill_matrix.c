/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:48:48 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/15 14:58:01 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_fill_matrix(char *str, int R, int C)
{
	char **matrix;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < R)
	{
		matrix[i][0] = str[i][0];
		while (j < C)
		{
			matrix[0][j] = str[0][j];
			j++;
		}
		i++;
	}
	return (matrix);
}
