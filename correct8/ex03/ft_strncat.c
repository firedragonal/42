/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:29:24 by adenord           #+#    #+#             */
/*   Updated: 2023/06/13 08:26:44 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y] && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char str[240] = "Yopla du ! ";
	char str2[] = "Kopftomiiiiiinch hallah le feat est la";
	char str3[240] = "Yopla du ! ";
	char str4[] = "Kopftomiiiiiinch hallah le feat est la";
	printf("true=%s\nft=%s\n", strncat(str, str2, 20), ft_strncat(str3, str4, 20));
}*/
