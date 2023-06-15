/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:30 by alphan            #+#    #+#             */
/*   Updated: 2023/06/15 20:27:34 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb <= 0)
		return (0);
	while (i >= 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
int main()
{
	int	nb = 4;
	printf("%d", ft_iterative_factorial(nb));
}*/
