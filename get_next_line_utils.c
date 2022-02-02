/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:44 by pyammoun          #+#    #+#             */
/*   Updated: 2022/02/02 14:48:42 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *buffjoin)
{
	size_t	l;

	if (!buffjoin)
		return (0);
	l = 0;
	while (buffjoin[l])
		l++;
	return (l);
}

int	ft_isn(char *buffjoin)
{
	int	i;

	i = 0;
	if (!buffjoin)
		return (0);
	while (buffjoin[i])
	{
		if (buffjoin[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	if (ft_strlen(s2))
		i = i + ft_strlen(s2);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (s1)
		while (s1[j])
			str[i++] = s1[j++];
	j = 0;
	if (s2)
		while (s2[j])
			str[i++] = s2[j++];
	str[i] = 0;
	free(s1);
	return (str);
}

char	*ft_strndup(char *buffjoin, size_t n)
{
	char	*dst;
	size_t	i;
	size_t	l;

	if (n < ft_strlen(buffjoin))
		l = n;
	else
		l = ft_strlen(buffjoin);
	dst = malloc(l + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < l && buffjoin[i])
	{
		dst[i] = buffjoin[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
