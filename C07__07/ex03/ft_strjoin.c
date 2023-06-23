/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:40:51 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 18:12:57 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_totalsize(char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			total += ft_strlen(strs[i]);
			j++;
		}
		i++;
	}
	i--;
	while (i > 0)
	{
		total += ft_strlen(sep);
		i--;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(ft_totalsize(strs, sep) + 1);
	if (!tab)
		return (0);
	if (size == 0)
	{
		tab = malloc(1);
		return (tab);
	}
	while (i < size - 1 && strs[i])
	{
		ft_strcat(tab, strs[i]);
		ft_strcat(tab, sep);
		i++;
	}
	ft_strcat(tab, strs[i]);
	return (tab);
}
/*
int main(int ac, char **av)
{
	printf("%s", ft_strjoin(ac, av, " | "));
}*/
