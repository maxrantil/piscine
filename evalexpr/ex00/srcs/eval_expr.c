/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 06:22:31 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 06:45:43 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int eval_expr(char *str)
{

	printf("%s\n", str);
	atoi(str);
	return (ft_atoi(str));
}
