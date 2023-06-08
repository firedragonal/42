/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@42mulhouse.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:30:19 by alphan            #+#    #+#             */
/*   Updated: 2023/06/08 12:53:05 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	writee(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		while (b <= 99)
		{
			writee('0' + a / 10);
			writee('0' + a % 10);
			writee(' ');
			writee('0' + b / 10);
			writee('0' + b % 10);
			b++;
			if (a < 98 && b <= 100)
			{
				writee(',');
				writee(' ');
			}
		}
		a++;
		b = a + 1;
	}
}
