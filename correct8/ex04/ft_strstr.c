/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:07 by adenord           #+#    #+#             */
/*   Updated: 2023/06/13 09:01:13 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[y])
		{
			if (y == (ft_strlen(to_find) - 1))
				return (&str[i - y]);
			y++;
			i++;
		}
		i -= y;
		y = 0;
		i++;
	}
	return (0);
}
/*
int main()
{
	char haystack[] = "kjshdguhasoihZIDANE;;oisrah;guasrg";
	char needle[] = ";oi";
	printf("true=%s\nft=%s\n", strstr(haystack, needle),\
   	ft_strstr(haystack, needle));	
}*/
