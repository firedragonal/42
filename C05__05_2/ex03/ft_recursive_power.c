/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:51:36 by alphan            #+#    #+#             */
/*   Updated: 2023/06/19 16:22:22 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
/*
int main()
{
	int nb = 1;
	int power = 45;
	printf("%d", ft_recursive_power(nb, power));	
}*/
