/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:29:27 by alphan            #+#    #+#             */
/*   Updated: 2023/06/10 14:25:40 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('1');
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	ft_putchar('2');
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	ft_putchar('3');
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	ft_putchar('4');
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	ft_putchar('5');
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
}
