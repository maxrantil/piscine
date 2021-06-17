/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:01 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/01 18:30:06 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main () {
   const char haystack[20] = "TEis TEST! a this!";
   const char needle[10] = "TEST!";
   char haystack2[20] = "TEis TEST! a this!";
   char needle2[10] = "TEST!";
   char *ret;
   char	*ret2;

   ret = strstr(haystack, needle);
   ret2 = ft_strstr(haystack2, needle2);
	
   printf("The substring is: %s\n", ret);
   printf("The substring is: %s\n", ret2);
   return(0);
}
