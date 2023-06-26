/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createstring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:20:48 by mgovinda          #+#    #+#             */
/*   Updated: 2023/06/25 23:11:49 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_triplets(char *dec_string, t_dict *dict)
{
	char	*ret;

	ret = str_cat_malloc("", "");
	if (ft_hundred(dec_string, dict) != 0)
	{
		ret = str_cat_malloc_fd(ft_hundred(dec_string, dict), " ");
		dec_string++;
	}
	else
		dec_string++;
	if (ft_decimals(dec_string, dict) != 0)
		ret = str_cat_malloc_fds(ret, ft_decimals(dec_string, dict));
	return (ret);
}

char	*ft_create_string(unsigned long long nb, t_dict *dict)
{
	char	*dec_string;
	int		length;
	char	*ret;

	dec_string = ulltoa(nb);
	length = ft_strlen(dec_string);
	ret = str_cat_malloc("", "");
	ft_create_string0(&ret, &length, &dec_string, dict);
	while (length % 3 == 0 && ft_atoull(dec_string) != 0)
	{
		ret = str_cat_malloc_fd(ret, " ");
		ret = str_cat_malloc_fds(ret, ft_triplets(dec_string, dict));
		length -= 3;
		if (ft_power(10, length) != 1 && ft_atoull(dec_string)
			> ((unsigned long long) ft_power(10, length)))
		{
			ret = str_cat_malloc_fd(ret, " ");
			ret = str_cat_malloc_fd(ret, dict_search
					(ft_power(10, length), dict));
		}
		if (ft_power(10, length) == 1)
			break ;
		dec_string += 3;
	}
	return (ret);
}

void	ft_create_string0(char **ret, int *length,
		char **dec_string, t_dict *dict)
{
	if ((*length) % 3 != 0)
	{
		(*ret) = ft_first_triplets((*dec_string), (*length) % 3, dict);
		if (ft_power(10, (*length) - ((*length) % 3)) >= 1000)
		{
			(*ret) = str_cat_malloc_fd((*ret), " ");
			(*ret) = str_cat_malloc_fd((*ret), dict_search((ft_power(10,
								(*length) - ((*length) % 3))), dict));
		}
		*dec_string += ((*length) % 3);
		(*length) -= ((*length) % 3);
	}
}
