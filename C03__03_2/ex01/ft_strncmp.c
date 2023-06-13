/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:18:56 by alphan            #+#    #+#             */
/*   Updated: 2023/06/13 15:06:13 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			t = s1[i] - s2[i];
			return (t);
		}
		if (s1[i] != s2[i])
		{
			t = s1[i] - s2[i];
			return (t);
		}
		++i;
	}
	return (0);
}
/*
int main()
{
	unsigned int n = 10;
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "aaaa";
	char s4[] = "zzzz";
	char s5[] = "abcaa";
	printf("%d\n", ft_strcmp(s1, s2, n));
	printf("%d\n", ft_strcmp(s3, s4, n));
	printf("%d\n", ft_strcmp(s4, s3, n));
	printf("%d\n", ft_strcmp(s1, s5, n));
	printf("%d\n", ft_strcmp(s5, s1, n));
}*/
