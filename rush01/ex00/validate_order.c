/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:01:21 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:04:19 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

int	check_row(int **board, int **order, int i)
{
	int	j;
	int	cpt;
	int	cpt2;

	cpt = 1;
	cpt2 = 1;
	j = 0;
	while (board[i][j] <= 4 && j < B_SIZE)
	{
		if (board[i][j] < board[i][j + 1])
			cpt++;
		j++;
	}
	j = B_SIZE - 2;
	while (board[i][j] <= 4 && j > 0)
	{
		if (board[i][B_SIZE - 1] < board[i][j])
			cpt2++;
		j--;
	}
	if (cpt == order[2][i] && cpt2 == order[3][i])
		return (1);
	return (0);
}

int	check_col(int **board, int **order, int j)
{
	int	i;
	int	cpt;
	int	cpt2;

	cpt = 1;
	cpt2 = 1;
	i = 1;
	while (i < B_SIZE && board[i][j] <= 4)
	{
		if (board[0][j] < board[i][j])
			cpt++;
		i++;
	}
	i = B_SIZE - 2;
	while (i > 0 && board[i][j] <= 4)
	{
		if (board[B_SIZE - 1][j] < board[i][j])
			cpt2++;
		i--;
	}
	if (cpt == order[0][j] && cpt2 == order[1][j])
		return (1);
	return (0);
}
