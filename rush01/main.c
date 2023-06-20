/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:08:34 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:34:16 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "combine.h"
#define B_SIZE 4

int	call_error(void)
{
	int		i;
	char	*error;

	i = 0;
	error = "Error";
	while (error[i])
		ft_putchar(error[i++]);
	return (0);
}

int	error(int i, int **argc)
{
	int	res;
	int	board;
	int	order;

	if ((t_strlen(argc[1]) / 2) != B_SIZE * B_SIZE - 1)
		return (call_error());
	order = ft_2d_board(order);
	while (i < ft_strlen(argc[1]))
	{
		if (!(argc [1][i] >= '1' && argc[1][i] <= B_SIZE + '0'))
			return (call_error());
		if (argc[1][i + 1] != 32 && i + 1 < len - 1)
			return (call_error());
		i += 2;
	}
	ft_putorder(argc, order);
	board = ft_2d_board(board);
	res = error(order, 0, 0);
	if (res == 1)
		return (call_error());
}

int	main(int argv, char **argc)
{
	int		i;
	int		**board;
	int		**order;
	int		res;

	i = 0;
	if (argv != 2)
		return (call_error());
	error(ft_strlen(argc[1]), i);
	search(board, order);
	missing_number(board, order);
	missimg_number(board, order);
	res = 0;
	pick((int *)malloc(B_SIZE * sizeof(int)), \
	ft_init_permut(permut, count()), &res, B_SIZE + 1, B_SIZE);
	return (0);
}
