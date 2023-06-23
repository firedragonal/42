/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphan <alphan@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:14:59 by alphan            #+#    #+#             */
/*   Updated: 2023/06/23 12:32:02 by alphan           ###   ########.fr       */
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

int	indicator(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

char	*cpt_mot(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;
	char	*tab;

	i = 0;
	size = ft_strlen(str);
	if (size < 1)
		return (0);
	while (charset[i])
	{
		j = 0;
		while (str[j] && j < size)
		{
			if(indicator(str, str[j])
			j++;
		}
		i++;
	}
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

int main()
{

}
