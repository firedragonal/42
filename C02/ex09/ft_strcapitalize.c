/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:14:37 by alphan            #+#    #+#             */
/*   Updated: 2023/06/11 15:01:17 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] += 32;
		if ((str[i + 1] >= 'a' && str[i + 1] <= 'z') && str[i] == ' ' || \
		str[i] == '+' || str[i] == '-')
		{	
			str[i + 1] -= 32;
			i++;
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc , char *argv[])
{
	int	i;

	i = 0;
//	char str[]="salut, cnt tu vas ? 42mot quarae-deux; cinquante+et+un";
//	printf("%s", ft_strcapitalize(str));
	while(i < argc)
	{
		printf("argv[%d] = %s\n", i, ft_strcapitalize(argv[i]));
		i++;
	}
}*/
