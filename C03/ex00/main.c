/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:26:26 by alphan            #+#    #+#             */
/*   Updated: 2023/06/11 16:40:05 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>

int main(int argc, char * argv[])
{
	int	i;

	i = 0;
	while(i < argc)
	{
		printf("%s", ft_strcmp(argv[i]));
		i++;
	}
	}
