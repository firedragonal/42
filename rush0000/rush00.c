/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:01:26 by adenord           #+#    #+#             */
/*   Updated: 2023/06/10 14:52:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	i_x;
	int	i_y;

	i_x = 0;
	i_y = 0;
	while (i_y < y)
	{
		while (i_x < x)
		{
			if ((i_x == 0 || i_x == x - 1) && (i_y == 0 || i_y == y - 1))
				ft_putchar('o');
			if ((i_x > 0 && i_x < x - 1) && (i_y == 0 || i_y == y - 1))
				ft_putchar('-');
			if ((i_x == 0 || i_x == x - 1) && (i_y > 0 && i_y < y - 1))
				ft_putchar('|');
			if (((i_x > 0 && i_x < x - 1) && (i_y > 0 && i_y < y - 1)))
				ft_putchar(' ');
			if (i_x == x - 1)
				ft_putchar('\n');
			i_x++;
		}
		i_x = 0;
		i_y++;
	}
}
