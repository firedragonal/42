/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:09:24 by alphan            #+#    #+#             */
/*   Updated: 2023/06/09 11:27:12 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				j = 0;
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	int tab[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 8;
	int i = 0;
	ft_sort_int_tab(tab , size);
	while (i <= size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
