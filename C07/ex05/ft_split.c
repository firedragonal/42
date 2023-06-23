/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:14:59 by alphan            #+#    #+#             */
/*   Updated: 2023/06/22 16:29:08 by alphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;
	char	**tab;

	i = 0;
	size = ft_strlen(str);
	if (size < 1)
		return (0);
	while (str[i])
	{
		if (str[i] == charset[i])
		{
			j = i;
			while(str[j] == charset[j])
			{
				j++;
			}
			**tab = str[size - i + j];
			(*tab)++;
			i = j;
		}
		i++;
	}

}
