/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:35:26 by alphan            #+#    #+#             */
/*   Updated: 2023/06/19 14:56:12 by alphan           ###   ########.fr       */
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
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
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
		while (i < ft_sqrt(nb))
		{
			if (nb % i == 0 || nb % (i + 2) == 0)
				return (0);
			i += 6;
		}
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	argc = 1;
	printf("%d", ft_is_prime(atoi(argv[1])));
}*/
