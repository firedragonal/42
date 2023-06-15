/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:36:11 by alphan            #+#    #+#             */
/*   Updated: 2023/06/15 12:47:44 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power ==0)
		return 1;
	while(power--)
	{
		i *= nb;
	}
	return (i);
}
/*
int main()
{
	int	nb = 0;
	int	power = 3;
	printf("%d ",ft_iterative_power(nb, power));
}*/
