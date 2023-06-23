/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphann@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:07 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 18:04:52 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
//# include <stdio.h>
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
/*
int main()
{
	int	i;
	int *tab = ft_range(5,10);

	i = 0;
	while (i < (10 - 5))
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
