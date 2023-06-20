/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   missing_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:24:02 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:05:32 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

void	valid_cpt(int **board, int **order, int cpt, int i)
{
	int	j;

	if (cpt == 1)
	{
		j = 0;
		cpt = 10;
		while (j < B_SIZE)
		{
			cpt -= board[i][j];
			j++;
		}
		j = 0;
		while (j < B_SIZE)
		{
			if (board[i][j] == 0)
				board[i][j] = cpt;
			j++;
		}
	}
}

void	verif_zero(int **board, int i, int j, int cpt)
{
	cpt = 0;
	j = 0;
	while (j < B_SIZE)
	{
		if (board[j][i] == 0)
			cpt++;
		j++;
	}
}

void	missing_number(int **board, int **order)
{
	int	i;
	int	j;
	int	cpt;

	i = 0;
	while (i < B_SIZE)
	{
		verif_zero(board, i, j, cpt);
		valid_cpt(board, order, cpt, i);
		i++;
	}
	i = 0;
	while (i < B_SIZE)
	{
		verif_zero(board, i, j, cpt);
		valid_cpt(board, oder, cpt, i);
		i++;
	}
}
