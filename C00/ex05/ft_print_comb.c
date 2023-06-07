/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:21:27 by alphan            #+#    #+#             */
/*   Updated: 2023/06/07 17:57:19 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '8')
	{
		if (c <= '9') //&& c != b && c != a)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, ",", 1);
			c++;
		}
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
		if (b > '9')
		{
			a++;
			b = a + 1;
			c = b + 1;	
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
