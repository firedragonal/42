/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:11:55 by alphan            #+#    #+#             */
/*   Updated: 2023/06/09 11:04:02 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = tmp;
		i++;
	}
}
/*
int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 8;
	int	i = 0;
	ft_rev_int_tab(tab, size);
	while( i <= size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
