/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphann@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:49:42 by alphan            #+#    #+#             */
/*   Updated: 2023/06/19 17:22:10 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	if (nb != 0)
		return (0);
	return (i);
}

int main()
{
	printf("%d", ft_sqrt(2147395600));
}
