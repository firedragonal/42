/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:14:54 by alphan            #+#    #+#             */
/*   Updated: 2023/06/11 10:20:38 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	unsigned int n;
	char *src="hello";
	char dest[7];
	int i = 0;

	n = 10;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}*/
