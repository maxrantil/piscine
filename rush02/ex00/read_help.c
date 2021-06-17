/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:58:34 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/13 17:58:36 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int        read_input(char *ch)
{
    int    res;

    res = read(0, ch, 1);
    return (res);
}

int        main(void)
{
    char    *ch;

    ch = malloc(sizeof(char *));
    while (read_input(ch) != 0)
        write(1, ch, 1);
}