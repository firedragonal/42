/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:51:54 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 15:30:17 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_indicator(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	erreur(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(base);
	if (size < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || \
		(base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = 1;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int	signe;
	int	size;

	i = 0;
	nb = 0;
	signe = 1;
	size = ft_strlen(base);
	if (!(erreur(base)))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && ft_indicator(str[i], base) != -1)
		nb = (nb * size + ft_indicator(str[i++], base));
	return (nb * signe);
}
/*
int main()
{
	char str[] = "0";
	char base[] = "0";
	printf("%d", ft_atoi_base(str, base));
}*/
