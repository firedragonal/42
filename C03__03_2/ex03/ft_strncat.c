/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:00:01 by alphan            #+#    #+#             */
/*   Updated: 2023/06/13 15:45:15 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	unsigned int nb = 2;
	char src[] = "hello";
	char src2[] = "hello";
	char dest[20] = "bonjour";
	char dest2[20] = "bonjour";
	printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest2, src2, nb));
}*/
