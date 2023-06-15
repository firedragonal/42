/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:51:29 by alphan            #+#    #+#             */
/*   Updated: 2023/06/15 20:26:37 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	pair;

	i = 0;
	pair = 1;
	while (nb > 0)
	{
		nb -= pair;
		pair += 2;
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 11;
	if (nb % 2 == 0)
		return (0);
	else if (nb % 3 == 0)
		return (0);
	else if (nb % 5 == 0)
		return (0);
	else if (nb % 7 == 0)
		return (0);
	else
	{
		while (i < ft_sqrt(nb) / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	while (!(ft_is_prime(nb)))
	{
		nb ++;
	}
	return (nb);
}
/*
int main(int ac, char **av)
{
	ac = 1;
	printf("%d", ft_find_next_prime(atoi(av[1])));
}*/
