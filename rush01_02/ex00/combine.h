/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combine.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:54:10 by chajeon           #+#    #+#             */
/*   Updated: 2023/06/18 23:40:45 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMBINE_H
#define COMBINE_H
#define B_SIZE 4
#include <unistd.h>
#include <stdlib.h>

int		ft_diagonal(int **order, int i, int j);
void	ft_count(int num, int *count);
void	ft_init_count(int *count);
int		ft_check_three(int **order, int i, int *count);
int		check_result(int *count, int **order, int i);
void	init_cnt(int *count);
int		sub_error(int **order, int i, int j, int *count);
int		error(int **order, int i, int j);
int		**ft_2d_board(int **board);
void	free_2d_board(int **board);
int		ft_strlen(char *s);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_int_swap(int *a, int *b);
void	ft_putorder(char **argc, int **order);
int	 	call_error(void);
int 	count(void);
int 	**ft_init_permut(int **permut, int row);
void	pick(int *bucket, int **permut, int *row, int k);
void    valid_cpt(int **board, int **order, int cpt, int i);
void    verif_zero(int **board, int i, int j, int cpt);
void    missing_number(int **board, int **order);
void    search(int **board, int **order);
void    search_for_1(int **board, int **orderi, int i);
void    search_for_3(int **board, int **order, int i, int j);
void    search_for_1(int **board, int **orderi, int i);
int miss_row(int **board, int nb, int i);
int miss_col(int **board, int nb, int j);
int check_row(int **board, int **order, int i);
int check_col(int **board, int **order, int j);
#endif
