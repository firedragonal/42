/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:26 by alphan            #+#    #+#             */
/*   Updated: 2023/06/13 11:24:47 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
		{
			j = 0;
			while (str[j])
			{
				str[j] = str[i + j];
				j++;
			}
			str[j] = '\0';
			return (str);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "heoawkhello awkdxfhb";
	char t[] = "hello";
	printf("%s\n", ft_strstr(str, t));
	printf("%s\n", strstr(str, t));
	ft_strstr(str, t);
	printf("%s", str);
}*/
