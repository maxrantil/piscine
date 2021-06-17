/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:51:05 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/16 05:27:55 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strdup(char *src);

int main() 
{
   char *str = "Helloworld";
   char *result;
   result = strdup(str);
   printf("The string : %s\n", result);
   
   char *str2 = "Helloworld2";
   char *result2;
   result2 = ft_strdup(str2);
   printf("The string : %s\n", result2);
   return 0;
}
