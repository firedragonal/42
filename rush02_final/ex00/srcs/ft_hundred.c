/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:03:14 by alphan            #+#    #+#             */
/*   Updated: 2023/06/25 22:55:08 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_hundred_0(char *dec_string, char **tmp)
{
	int	i;

	i = -1;
	while (++i < 3)
	{
		(*tmp)[i] = dec_string[i];
	}
	(*tmp)[i] = 0;
	return (*tmp);
}

void	ft_hundred_1(char *dec_string, t_dict *dict, char **ret, char **tmp)
{
	unsigned long long	hundred;

	(*tmp)[0] = dec_string[0];
	(*tmp)[1] = 0;
	hundred = ft_atoull((*tmp));
	if (hundred != 0)
	{
		(*ret) = dict_search(hundred, dict);
		(*ret) = str_cat_malloc((*ret), " ");
		(*ret) = str_cat_malloc((*ret), dict_search(100, dict));
	}
}

char	*ft_hundred(char *dec_string, t_dict *dict)
{
	char				*ret;
	char				*tmp;

	if (dec_string[0] == '0')
		return (0);
	tmp = malloc(sizeof(char) * 3);
	if (!tmp)
		return (NULL);
	ft_hundred_0(dec_string, &tmp);
	if (ft_atoull(tmp) < 100)
		return (0);
	ret = str_cat_malloc("", "");
	if (dec_string[0] != '0')
		ft_hundred_1(dec_string, dict, &ret, &tmp);
	else
	{
		ret = malloc(sizeof(char));
		if (!ret)
			return (NULL);
		ret[0] = 0;
	}
	free(tmp);
	return (ret);
}

void	ft_decimals_0(t_dict *dict, unsigned long long *decimals, char **ret)
{
	if ((*decimals) / 10 != 0)
		*ret = str_cat_malloc("", dict_search((((*decimals) / 10) * 10), dict));
	if ((*decimals) % 10 != 0)
	{
		(*ret) = str_cat_malloc((*ret), " ");
		(*ret) = str_cat_malloc((*ret), dict_search(((*decimals) % 10), dict));
	}
}

char	*ft_decimals(char *dec_string, t_dict *dict)
{
	unsigned long long	decimals;
	char				*ret;
	char				*tmp;
	int					i;

	i = -1;
	tmp = malloc(sizeof(char) * 3);
	if (!tmp)
		return (NULL);
	while (++i < 2)
	{
		tmp[i] = dec_string[i];
	}
	tmp[i] = 0;
	ret = str_cat_malloc("", "");
	decimals = ft_atoull(tmp);
	if (decimals < 21 && decimals != 0)
		ret = str_cat_malloc("", dict_search(decimals, dict));
	else
	{
		ft_decimals_0(dict, &decimals, &ret);
	}
	free(tmp);
	return (ret);
}
