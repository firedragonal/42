/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:53:57 by alphan            #+#    #+#             */
/*   Updated: 2023/06/08 20:06:08 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	writee(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	while (nb / 10 != 0)
	{
		writee('0' + nb / 10);
		nb /= 10;
	}
	//writee('0' + nb % 10);
	if ( nb > 10)
	{
		writee('0' + nb % 10);
		ft_putnbr(nb);
	}
}

int	main()
{
	ft_putnbr(455);
}
