/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:55:56 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 11:19:52 by alphan           ###   ########.fr       */
/*   Updated: 2023/06/17 19:24:37 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void search(int **board, int **order)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	i=0;
	while (i < B_SIZE)
	{
<<<<<<< HEAD
=======
		j = 0;
>>>>>>> 61fa3221a1ab2736a4d673dd18c2dc6817fc4978
		if (order[0][i] == 4)
		{
			j = 0;
			while (j < B_SIZE)
			{
				board[j][i] = 1 + j;
				//printf("B: %c, J: %d, I: %d\n", board[j][i],j,i);
				j++;
			}
			j = 0;
		}
<<<<<<< HEAD
		if (order[2][i] == 4)
		{
			j = 0;
			while (j < B_SIZE)
			{
				board[i][j] = 1 + j;
				j++;
			}
			board[0][i] = 4;
		}
		if (order[1][i] == 4)
=======
		if (order[0][i] == 1)
		{
			board[0][i] = 4;
		}
		if (order[2][i] == 4)
>>>>>>> 61fa3221a1ab2736a4d673dd18c2dc6817fc4978
		{
			j = 0;
			while (j < B_SIZE)
			{
				board[j][i] = 4 - j;
			i = 0;
			while (j < B_SIZE)
			{
				board[i][j] = 1 + j;
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
<<<<<<< HEAD
		k = 0;
		while (k < B_SIZE)
		{
			if (order[k][i] == 1)
			{
				board[k][i] = 4;
			}
			k++;
=======
		if (order[2][i] == 1)
		{
			board[i][0] = 4;
>>>>>>> 61fa3221a1ab2736a4d673dd18c2dc6817fc4978
		}
		i++;
	} 
}
