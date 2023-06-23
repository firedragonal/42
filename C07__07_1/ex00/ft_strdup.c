/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:32:54 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 19:07:02 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//# include <stdio.h>
//# include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int main(int ac, char **av)
{
	ac = 1;
	char *res = ft_strdup(av[1]);
	char *res2 = strdup(av[1]);
	printf("%s\n%s\n", res, res2);
	free(res);
}*/
