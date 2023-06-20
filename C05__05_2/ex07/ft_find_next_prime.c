/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:51:29 by alphan            #+#    #+#             */
/*   Updated: 2023/06/20 11:13:42 by alphan           ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	n;

	i = 11;
	n = nb;
	if (n < 2)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if (n % 2 == 0)
		return (0);
	else if (n % 3 == 0)
		return (0);
	else if (n % 5 == 0)
		return (0);
	else if (n % 7 == 0)
		return (0);
	else
	{
		while (i * i <= n)
		{
			if (n % i == 0 || n % (i + 2) == 0)
				return (0);
			i += 6;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
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
