/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:22:43 by alphan            #+#    #+#             */
/*   Updated: 2023/06/09 11:32:28 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;

	tmp1 = *a;
	*a /= *b;
	*b = tmp1 % *b;
}
/*
int	main(void)
{
	int a = 10;
	int b = 2;
	int *pa = &a;
	int *pb = &b;
	
	ft_ultimate_div_mod(pa, pb);
	printf("%d %d", a, b);
}*/
