/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:50:39 by adenord           #+#    #+#             */
/*   Updated: 2023/06/13 14:17:17 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
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
	char str[26] = "Yolpla du ! ";
	char str2[] = "Kopftomi Elsass frei !";
	char str3[26] = "Yolpla du ! ";
	char str4[] = "Kopftomi Elsass frei !";
	printf("true=%s\nft=%s\n", strcat(str, str2), ft_strcat(str3, str4));
}*/
