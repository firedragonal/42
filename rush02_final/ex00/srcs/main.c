/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:32:29 by mgovinda          #+#    #+#             */
/*   Updated: 2023/06/25 22:13:07 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush_02.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int					flag;
	unsigned long long	nbr;
	char				*dic_path;
	t_dict				*dict;
	char				*ret;

	flag = args_sorter(ac, av);
	nbr = 0;
	ft_check_flag(&nbr, &dic_path, flag, av);
	if (flag == -1)
		return (-1);
	dict = dictionary_parser(dic_path);
	if (!dict || (nbr > (1000 * dict_max(dict)) - 1)
		|| (nbr > 18446744073709551614ull))
	{
		write(2, "Dict Error\n", 11);
		return (-1);
	}
	ret = ft_create_string(nbr, dict);
	ft_free_dict(dict);
	ret = ft_str_cleaner(ret);
	ft_putstr(ret);
	return (0);
}

void	ft_check_flag(unsigned long long *nbr, char **dp, int flag, char **av)
{
	if (flag == 1)
	{
		*dp = "./srcs/dict/numbers.dict";
		*nbr = ft_atoull(av[1]);
	}
	else if (flag == 2)
	{
		*dp = av[1];
		*nbr = ft_atoull(av[2]);
	}
	else
	{
		write(2, "Error\n", 6);
	}
}
