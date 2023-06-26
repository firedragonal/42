/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_triplets.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:18:45 by mgovinda          #+#    #+#             */
/*   Updated: 2023/06/25 23:02:56 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_first_triplets(char *dec_string, int max, t_dict *dict)
{
	char				*tmp;
	char				*ret;
	int					i;
	unsigned long long	nbr;

	i = -1;
	tmp = malloc(sizeof(char) * 3);
	if (!tmp)
		return (NULL);
	while (++i < max)
		tmp[i] = dec_string[i];
	tmp[i] = 0;
	nbr = ft_atoull(tmp);
	ft_first_triplets_0(&ret, nbr, dict);
	free(tmp);
	return (ret);
}

void	ft_first_triplets_0(char **ret, unsigned long long nbr, t_dict *dict)
{
	if (nbr < 21)
		(*ret) = str_cat_malloc("", dict_search(nbr, dict));
	else
	{
		(*ret) = str_cat_malloc("", dict_search(((nbr / 10) * 10), dict));
		if (nbr % 10 != 0)
		{
			(*ret) = str_cat_malloc_fd((*ret), " ");
			(*ret) = str_cat_malloc_fd((*ret), dict_search((nbr % 10), dict));
		}
	}
}
