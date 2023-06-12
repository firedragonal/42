/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:20:28 by alphan            #+#    #+#             */
/*   Updated: 2023/06/11 19:38:50 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	taille(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	j += i;
	return (j);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = taille(s1, s2);
	while (i < j)
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
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "aaaa";
	char s4[] = "zzzz";
	char s5[] = "abcaa";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s3, s4));
	printf("%d\n", ft_strcmp(s4, s3));
	printf("%d\n", ft_strcmp(s1, s5));
	printf("%d\n", ft_strcmp(s5, s1));
}*/
