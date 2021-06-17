/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:48:17 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/04 09:04:29 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{

    int i;
    int min;
    int max;
	int *nbrs;
	
	i = 0;
	min = -27;
    max = 7;
    nbrs = ft_range(min, max);
    while (i < (max - min))
    {
        printf("%d ", nbrs[i]);
        i++;
    }
    return (0);
}