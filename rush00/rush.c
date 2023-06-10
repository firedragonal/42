/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:11:06 by alphan            #+#    #+#             */
/*   Updated: 2023/06/10 14:23:36 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first(int x, int y, int i);
void	second(int x, int y, int i, int j);
void	exep_second(int x, int y, int i);
void	last(int x, int y, int i);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x == 1 && y == 1)
		ft_putchar('/');
	else
	{
		first(x, y, i);
		i = 0;
		second(x, y, i, j);
		i = 0;
		exep_second(x, y, i);
		last(x, y, i);
	}
}

void	first(int x, int y, int i)
{
	ft_putchar('/');
	if (x != 1)
	{
		while(i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	second(int x, int y, int i, int j)
{
	int	k;
	while(i < x - 2)
	{
		while(j < y - 2)
		{
			k = 0;
			ft_putchar('*');
			while(k < x - 2)
			{
				ft_putchar(' ');
				k++;
			}
			ft_putchar('*');
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}

void	exep_second(int x, int y, int i)
{
	if (x == 1)
	{
		while(i < y - 2)
		{
			ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
	}
}

void	last(int x, int y, int i)
{
	if (y != 1)
	{
		i = 0;
		ft_putchar('\\');
		if (x != 1)
		{
			while(i < x - 2)
			{
				ft_putchar('*');
				i++;
			}
			ft_putchar('/');
		}
	}
}
