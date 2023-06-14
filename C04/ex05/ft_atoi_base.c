/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:08:09 by alphan            #+#    #+#             */
/*   Updated: 2023/06/14 20:46:10 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
	if (!(str[i] >= base[0] && str[i] <= base[size - 1]))
		return (0);
	while (str[i] >= base[0] && str[i] <= base[size - 1])
		nb = (nb * size + str[i++] - base[0]);
	return (nb * signe);
}
/*
int main()
{
	char str[] = "\t\n 	+-457";
	char base[] = "0123456789";
	printf("%d", ft_atoi_base(str, base));
}*/
