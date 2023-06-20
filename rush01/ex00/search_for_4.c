/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_for_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:45:53 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:02:56 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

void	search_v(int **board, int **order, int i, int j)
{
	if (order[0][i] == 4)
	{
		j = 0;
		while (j < B_SIZE)
		{
			board[j][i] = 1 + j;
			j++;
		}
	}
	if (order[1][i] == 4)
	{
		j = 0;
		while (j < B_SIZE)
		{
			board[j][i] = 4 - j;
			j++;
		}
	}
}

void	search_h(int **board, int **order, int i, int j)
{
	if (order[1][i] == 4)
	{
		j = 0;
		while (j < B_SIZE)
		{
			board[j][i] = 4 - j;
			j++;
		}
	}
	if (order[3][i] == 4)
	{
		j = 0;
		while (j < B_SIZE)
		{
			board[i][j] = 4 - j;
			j++;
		}
	}
}

void	search_for_4(int **board, int **order, int i, int j)
{
	search_v(board, order, i, j);
	search_h(board, order, i, j);
}
