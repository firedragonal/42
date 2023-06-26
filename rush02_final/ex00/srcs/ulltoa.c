/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulltoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:08:30 by alphan            #+#    #+#             */
/*   Updated: 2023/06/25 17:17:09 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_rev_char_tab(char *tab)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen(tab) - 1;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

char	*ulltoa(unsigned long long nbr)
{
	unsigned long long	i;
	char				*tab;

	i = 0;
	if (nbr == 0)
	{
		tab = malloc(sizeof(char) * 2);
		if (!tab)
			return (NULL);
		tab[0] = '0';
		tab[1] = 0;
		return (tab);
	}
	tab = malloc(sizeof(char) * 21);
	if (!tab)
		return (NULL);
	while (nbr != 0)
	{
		tab[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	tab[i] = '\0';
	ft_rev_char_tab(tab);
	return (tab);
}
