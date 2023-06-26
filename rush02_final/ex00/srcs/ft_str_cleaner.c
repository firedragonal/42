/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_cleaner.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:44:43 by mgovinda          #+#    #+#             */
/*   Updated: 2023/06/25 17:15:58 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_free_chartab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	*ft_str_cleaner(char *str)
{
	char	**tab;
	char	*ret;
	int		size;

	size = 0;
	tab = ft_split(str, " ", &size);
	ret = ft_strjoin(size, tab, " ");
	ft_free_chartab(tab, size);
	return (ret);
}
