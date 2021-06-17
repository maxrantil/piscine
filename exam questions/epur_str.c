/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:52:47 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/15 05:09:47 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		epur_str_main(int argc, char **argv)
{
	int		i;
	int		flg;

	i = 0;
	flg = 0;
	if (argc == 1)
	{
		while (argv[0][i] == ' ' || argv[0][i] == '\t')
			i += 1;
		while (argv[0][i])
		{
			if (argv[0][i] == ' ' || argv[0][i] == '\t')
				flg = 1;
			if (!(argv[0][i] == ' ' || argv[0][i] == '\t'))
			{
				if (flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &argv[0][i], 1);
			}
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int main(void)
{
	char *arg0[] = {"See? It´s easy to print the same string"};
	epur_str_main(1, arg0);
	char *arg1[] = {" this			time it 	  will 		be      more complex   .   "};
	epur_str_main(1, arg1);
	char *arg2[] = {"No shit sherlock", "foe sho shurlowq, no shiiiet"};
	epur_str_main(2, arg2);
	char *arg3[] = {""};
	epur_str_main(1, arg3);
	return (0);
}