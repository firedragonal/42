/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphann@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:46:58 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 15:43:45 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (i < (max - min))
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == 0)
		return (-1);
	return (max - min);
}
/*
int main()
{
	int *tab;
	int size;

	tab = 0;
	size = ft_ultimate_range(&tab, 0, 15);
	printf("size ; %d\n", size);
	int i = 0;
	while (i != size)
	{
		printf("%i; %i\n", i, tab[i]);
		i++;
	}
}*/
