/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:09:24 by alphan            #+#    #+#             */
/*   Updated: 2023/06/10 16:29:32 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		j = i;
		while (j > 0 && tab[j -  1] > tmp)
		{
				tab[j] = tab[j - 1];
				j--;
		}
		tab[j] = tmp;
		i++;
	}
}
/*
int main()
{
	int tab[]= {1, 45, 3, 4, 25, 16, 7, 8, 9};
	int size = 9;
	int i = 0;
	ft_sort_int_tab(tab , size);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
