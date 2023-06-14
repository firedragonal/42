/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:26 by alphan            #+#    #+#             */
/*   Updated: 2023/06/14 11:51:32 by alphan           ###   ########.fr       */
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
	unsigned int	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (j == (ft_strlen(to_find) - 1))
				return (str + i - j);
			j++;
			i++;
		}
		i -= j;
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "ja6mvivii5f1b3q9znfhr";
	char t[] = "vii";
	printf("%s ft\n", ft_strstr(str, t));
	printf("%s str\n", strstr(str, t));
}*/
