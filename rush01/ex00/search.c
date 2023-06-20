/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:55:56 by alphan            #+#    #+#             */
/*   Updated: 2023/06/18 23:01:25 by alphan           ###   ########.fr       */
/*   Updated: 2023/06/17 19:24:37 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "combine.h"

void	search(int **board, int **order)
{
	int	i;
	int	j;

	i = 0;
	while (i < B_SIZE)
	{
		search_for_4(board, order, i, j);
		search_for_1(board, order, i, j);
		search_for_3(board, order, i, j);
		i++;
	}
}
