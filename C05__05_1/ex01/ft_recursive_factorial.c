/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:16:59 by alphan            #+#    #+#             */
/*   Updated: 2023/06/19 11:21:33 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb *= ft_recursive_factorial(nb -1));
	else
		return (1);
}
/*
int	main()
{
	int	nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}*/
