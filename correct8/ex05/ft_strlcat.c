/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:06:28 by adenord           #+#    #+#             */
/*   Updated: 2023/06/13 18:16:23 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	t;

	t = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	y = 0;
	if (size == 0 || size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (i < (size - 1) && src[y])
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (t);
}
/*
int main()
{

	char s1[14] = "";
	char s2[] = "kjsdhfkhas;krgf/isrGLrsgjarg";
	char s11[14] = "";
	char s22[] ="kjsdhfkhas;krgf/isrGLrsgjarg";
	int temp = 11;
	printf("true:\nhello[6], void, 0\n%lu\n%s\n", strlcat(s1, s2, temp), s1);
	printf("ft:\nhello[6], void, 0\n%d\n%s\n", ft_strlcat(s11, s22, temp), s11);

}*/
