/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:54:11 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 09:24:52 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"
 
int funct(char *index)
{
	int i;

	i = 2;
  	if (i < 3) 
	  	return (1);
  	else 
	  	return (0);
}
 
 
int main ()
{
	char *arr []= {"something", "something else", 0};
  	int copy = 0;
  	copy = ft_any(arr, &funct);
  	printf("%d\n", copy);
 
  	return (0);
}