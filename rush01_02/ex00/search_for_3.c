/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_for_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:55:02 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:02:35 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

void	search_for_3(int **board, int **order, int i, int j)
{
	if (order[0][i] == 3)
	{
		if (order[1][i] == 2 && board[2][i] == 0)
			board[2][i] = 4;
	}
	if (order[1][i] == 3)
	{
		if (order[0][i] == 2 && board[1][i] == 0)
			board[1][i] = 4;
	}
	if (order[2][i] == 3)
	{
		if (order[3][i] == 2 && board[i][2] == 0)
			board[i][2] = 4;
	}
	if (order[3][i] == 3)
	{
		if (order[2][i] == 2 && board[i][1] == 0)
			board[i][1] = 4;
	}
}
