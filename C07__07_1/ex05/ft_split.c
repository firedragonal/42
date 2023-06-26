/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:14:59 by alphan            #+#    #+#             */
/*   Updated: 2023/06/26 17:23:45 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	indicator(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	j;
	int size;
	int	cpt;

	i = 0;
	cpt = 0;
	size = ft_strlen(str);
	while (str[i] == indicator(charset, str[i]) == 0)
		i++;
	while (i < size && str[i])
	{
		j = i;
		while (indicator(charset, str[j]) == 1 && str[j])
			j++;
		while (indicator(charset, str[j]) == 0 && str[j])
			j++;
		cpt++;
		i = j;
	}
	return (cpt);
}

char	**word_malloc(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;
	int		size2;
	char	**tab;

	i = 0;
	size = ft_strlen(str);
	size2 = ft_strlen(charset);
	if (size < 1)
		return (0);
	tab = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!tab)
		return (NULL);
	while (i < size && str[i])
	{
		j = i;
		while (str[j])
		{
			while (indicator(charset, str[j]) == 1)
				j++;
			*tab = malloc(sizeof(char) * ((j - i) + 1));
			if (!(*tab))
				return (NULL);
			tab++;
			while (indicator(charset, str[j]) == 0)
				j++;
		}
		i = j;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = word_malloc(str, charset);
	while (str[i])
	{
		j = i;
		while(str[j])
		{
			while (indicator(charset, str[j] == 1))
			{
				*tab[k] = str[j];
				j++;
				k++;
			}
			tab++;
			while (indicator(charset, str[j]) == 1)
				j++;
		}
		i = j;
	}
	tab[k] = 0;
	return (tab);
}

int main()
{
	int	i;
	char **tab;

	i = 0;
	tab = ft_split("salut?ca?va", "?");
	if (!tab)
		printf("=================");
	while (tab[i])
	{
		printf("%i:%s\n", i, tab[i]);
		i++;
	}
}
