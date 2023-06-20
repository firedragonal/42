/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:40:17 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:03:54 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

int	miss_row(int **board, int nb, int i)
{
	int	j;

	j = 0;
	while (j < B_SIZE)
	{
		if (board[i][j] == nb)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int	miss_col(int **board, int nb, int j)
{
	int	i;

	i = 0;
	while (i < B_SIZE)
	{
		if (board[i][j] == nb)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
