/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:25:49 by alphan            #+#    #+#             */
/*   Updated: 2023/06/08 18:21:38 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int div = 0;
	int mod = 0;
	int *pdiv = &div;
	int *pmod = &mod;
	ft_div_mod(10, 10, pdiv, pmod);
	printf("%d", div);
	printf("%d", mod);
}*/
