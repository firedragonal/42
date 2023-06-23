/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphann@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:24:19 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 15:41:05 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	ft_indicator(char c, char *base);
int		erreur(char *base);
int		ft_atoi_base(char *str, char *base);

void	ft_putnbr_base(int nbr, char *base, char **tab)
{
	unsigned int	n;
	unsigned int	size;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		n = -nbr;
		*tab[0] = '-';
		(*tab)++;
	}
	else
		n = nbr;
	if (n > size - 1)
	{
		ft_putnbr_base(n / size, base, tab);
		ft_putnbr_base(n % size, base, tab);
	}
	else
	{
		**tab = base[n];
		(*tab)++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*tab;
	char	*tmp;

	if (!(erreur(base_from)))
		return (0);
	if (!(erreur(base_to)))
		return (0);
	tab = malloc(34);
	nb = ft_atoi_base(nbr, base_from);
	tmp = tab;
	ft_putnbr_base(nb, base_to, &tmp);
	return (tab);
}
/*
int main()
{
	printf("%s", ft_convert_base("0", "01", "01"));
}*/
