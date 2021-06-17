/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:54:42 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/03 05:42:31 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	argc = 1;
	i = 1;
	while (argv[i] != '\0')
	{
		i++;
	}
	while (i > 1)
	{
		i--;
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
