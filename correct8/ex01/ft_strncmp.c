/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:16:41 by adenord           #+#    #+#             */
/*   Updated: 2023/06/13 14:16:10 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < (n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	int i = 11;
	char c = 127;
	char b = 2;
	char str[] = "zidane n10";
	char str2[] = "zidane n10";
	str2[3] = b;
	str[3] = c;
	printf("true = %d, ft = %d\n", strncmp(str, str2, i),ft_strncmp(str, str2, i));	
}*/
