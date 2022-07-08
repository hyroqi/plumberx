/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:08:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 03:38:56 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

size_t	ft_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		while (*(str + i) == c)
			i++;
		if (*(str + i) != c && *(str + i) != '\0')
			count += 1;
		while (*(str + i) != c && *(str + i) != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	i = 0;
	k = 0;
	str = malloc(sizeof(s) * (ft_count(s, c) + 1));
	if (!str)
		return (0);
	while (*(s + i) != '\0' && k < ft_count(s, c))
	{
		j = 0;
		while (*(s + i) == c)
			i++;
		while (*(s + i + j) != c && *(s + i + j) != '\0')
			j++;
		str[k] = malloc(sizeof(*s) * (j + 1));
		ft_strlcpy(str[k++], s + i, j + 1);
		i = i + j + 1;
	}
	str[k] = 0;
	return (str);
}
