/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:39:52 by alphan            #+#    #+#             */
/*   Updated: 2023/06/14 20:10:33 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	comp(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
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

int	verif(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(base);
	if (size < 2)
		return ;
	if (!(verif(base)) || (!(comp(base))))
		return ;
	if (nbr < 0)
	{
		n = -nbr;
		ft_putchar('-');
	}
	else
		n = nbr;
	if (n > size - 1)
	{
		ft_putnbr_base(n / size, base);
		ft_putnbr_base(n % size, base);
	}
	else
		ft_putchar(base[n]);
}
/*
int main()
{
	int nb = 01;
	char base[] = "aaa";
	ft_putnbr_base(nb, base);
}*/
