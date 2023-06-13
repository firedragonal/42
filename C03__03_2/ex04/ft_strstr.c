/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:26 by alphan            #+#    #+#             */
/*   Updated: 2023/06/13 20:29:46 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "jauw3f48g6mv5f1b3q9znfhr";
	char t[] = "3f";
	printf("%s ft\n", ft_strstr(str, t));
	printf("%s str\n", strstr(str, t));
}*/
