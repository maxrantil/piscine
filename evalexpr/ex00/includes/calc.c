/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:01:46 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 15:20:55 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			str[i] -= '0';
			i++;
		}
		if (str[i] == ' ')
			i++;
		if (str[i] == '(')
			i++;
		if (str[i] == ')')
			i++;
		if (str[i] == '/')
			i++;
		if (str[i] == '%')
			i++;
		if (str[i] == '*')
			i++;
		if (str[i] == '+')
			i++;
		if (str[i] == '-')
		{
			minus = -1;
			i++;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
	}
	return (result);
}
