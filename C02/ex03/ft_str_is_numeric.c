/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 09:59:00 by alphan            #+#    #+#             */
/*   Updated: 2023/06/11 10:22:24 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '1' || str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char str[]="";
	printf("%d", ft_str_is_numeric(str));
}*/
