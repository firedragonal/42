/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_for_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:41:29 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:03:20 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

void	search_for_1(int **board, int **orderi, int i)
{
	if (order[0][i] == 1)
	{
		board[0][i] = 4;
		if (order[1][i] == 2)
			board[3][i] = 3;
	}
	if (order[1][i] == 1)
	{
		board[3][i] = 4;
		if (order[0][i] == 2)
			board[0][i] = 3;
	}
	if (order[2][i] == 1)
	{
		board[i][0] = 4;
		if (order[3][i] == 2)
			board[i][3] = 3;
	}
	if (order[3][i] == 1)
	{
		board[i][3] = 4;
		if (order[2][i] == 2)
			board[i][0] = 3;
	}	
}
