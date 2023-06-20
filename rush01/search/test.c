/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:40:17 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 18:50:43 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int miss_row(int **board, int nb, int i)
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

int miss_col(int **board, int nb, int j)
{
	int i;

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

int backtracking(int **order, int **board, int position)
{
	int i;
	int	j;
	int	k;

	k = 1;
	if (position == B_SIZE*B_SIZE)
		return (1);
	i = position / B_SIZE;
	j = position % B_SIZE;
	if (board[i][j] != 0)
		return backtracking(board, position + 1);
	while (k <= B_SIZE)
	{
		if (miss_row(board, k, i) && miss_col(board, k, j) && missing_number(board, order))
		{
			board[i][j] = k;
			if (backtracking(board, position + 1))
					return (1);
		}
		k++;
	}
	board[i][j] = 0;
	return (0);
}
