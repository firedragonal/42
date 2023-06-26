/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 23:47:50 by alphan            #+#    #+#             */
/*   Updated: 2023/06/23 23:52:01 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	count_word(char *str)
{
	int	i;
	int	j;
	int size;
	int cpt;

	i = 0;
	cpt = 0;
	size = ft_strlen(str);
	while (str[i] == ' ')
		i++;
	while (i < size && str[i])
	{
		j = i;
		while (str[j] != ' ' && str[j])
			j++;
		while (str[j] == ' ' && str[j])
			j++;
		cpt++;
		i = j;
	}
	return (cpt);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", count_word(av[1]));
}
