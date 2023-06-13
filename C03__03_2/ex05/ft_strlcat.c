/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:30:09 by alphan            #+#    #+#             */
/*   Updated: 2023/06/13 20:47:20 by alphan           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	i = ft_strlen(dest);
	j = 0;
	a = ft_strlen(dest) + ft_strlen(src);
	if (size == 0 || size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (j < (size -1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size == 0 || size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	dest[i] = '\0';
	return (a);
}
/*
int main()
{
	char dest[15] = "";
	char src[] = "dacc";
	char dest2[15] = "";
	char src2[] = "dacc";
	printf("%lustrl\n", strlcat(dest, src, 0));
	printf("%uftstrl\n", ft_strlcat(dest2, src2, 0));	
}*/
