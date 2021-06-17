/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:58:12 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 06:58:52 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
printf("%d %d\n", atoi("1"),  ft_atoi("1"));
printf("%d %d\n", atoi("-1"), ft_atoi("-1"));

printf("%d %d\n", atoi("2147483647"),  ft_atoi("2147483647"));
printf("%d %d\n", atoi("2147483648"),  ft_atoi("2147483648"));
printf("%d %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
printf("%d %d\n", atoi("-2147483649"), ft_atoi("-2147483649"));

printf("%d %d\n", atoi("-010"),   ft_atoi("-010"));
printf("%d %d\n", atoi("-a"),     ft_atoi("-a"));
printf("%d %d\n", atoi("12a34"),  ft_atoi("12a34"));
printf("%d %d\n", atoi("-a4"),    ft_atoi("-a4"));
printf("%d %d\n", atoi(""),       ft_atoi(""));
printf("%d %d\n", atoi("-4a4"),   ft_atoi("-4a4"));
printf("%d %d\n", atoi(" -4a4"),  ft_atoi(" -4a4"));
printf("%d %d\n", atoi(" - 4a4"), ft_atoi(" - 4a4"));
printf("%d %d\n", atoi(" - 4 4"), ft_atoi(" - 4 4"));

printf("%d %d\n", atoi(" -a4"),       ft_atoi(" -a4"));
printf("%d %d\n", atoi("--1-2"),       ft_atoi("--1-2"));
printf("%d %d\n", atoi("+57"),       ft_atoi("+57"));
printf("%d %d\n", atoi("+++57"),       ft_atoi("+++57"));
printf("%d %d\n", atoi("   -+57"),       ft_atoi("   -+57"));
printf("%d %d\n", atoi(" +-57"),       ft_atoi(" +-57"));
}

