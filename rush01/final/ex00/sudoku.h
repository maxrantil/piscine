/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:38:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 16:13:10 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>
# define N 9

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_check_availability(int puzzle[][N], int row, int col, int num);
int		ft_check_boxes(int puzzle[N][N], int row, int col, int num);
int		ft_fill_num(int puzzle[N][N], int row, int col);
void	ft_grid_print(int puzzle[N][N]);
void	ft_fill_puzzle(int puzzle[N][N], char **str);
int		ft_check_argv(int argc, char **argv);

#endif
