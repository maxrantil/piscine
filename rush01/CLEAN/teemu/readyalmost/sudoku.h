/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:38:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 15:22:54 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>
# define N 9

void	ft_putchar(char c);
void	ft_strlen(char *str);
void	ft_putnbr(int nb);
int		check_availability(int puzzle[][N], int row, int col, int num);
int		check_boxes(int puzzle[N][N], int row, int col, int num);
int		fill_num(int puzzle[N][N], int row, int col);
void	grid_print(int puzzle[N][N]);

#endif
