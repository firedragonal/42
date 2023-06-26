/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cat_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:56:41 by wkeiser           #+#    #+#             */
/*   Updated: 2023/06/25 22:30:17 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*str_cat_malloc(char *dest, char *src)
{
	int		i;
	int		j;
	int		size;
	char	*ret;

	size = ft_strlen(dest) + ft_strlen(src) + 1;
	ret = (char *)malloc(sizeof(char) * size);
	if (!(ret))
		return (NULL);
	i = 0;
	while (dest[i])
	{
		ret[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
		ret[i++] = src[j++];
	ret[i] = '\0';
	return (ret);
}

char	*str_cat_malloc_fs(char *dest, char *src)
{
	int		i;
	int		j;
	int		size;
	char	*ret;

	size = ft_strlen(dest) + ft_strlen(src) + 1;
	ret = (char *)malloc(sizeof(char) * size);
	if (!(ret))
		return (NULL);
	i = 0;
	while (dest[i])
	{
		ret[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
		ret[i++] = src[j++];
	ret[i] = '\0';
	free(src);
	return (ret);
}

char	*str_cat_malloc_fd(char *dest, char *src)
{
	int		i;
	int		j;
	int		size;
	char	*ret;

	size = ft_strlen(dest) + ft_strlen(src) + 1;
	ret = (char *)malloc(sizeof(char) * size);
	if (!(ret))
		return (NULL);
	i = 0;
	while (dest[i])
	{
		ret[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
		ret[i++] = src[j++];
	ret[i] = '\0';
	free(dest);
	return (ret);
}

char	*str_cat_malloc_fds(char *dest, char *src)
{
	int		i;
	int		j;
	int		size;
	char	*ret;

	size = ft_strlen(dest) + ft_strlen(src) + 1;
	ret = (char *)malloc(sizeof(char) * size);
	if (!(ret))
		return (NULL);
	i = 0;
	while (dest[i])
	{
		ret[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
		ret[i++] = src[j++];
	ret[i] = '\0';
	free(dest);
	free(src);
	return (ret);
}
