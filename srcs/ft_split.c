/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:08:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 16:37:21 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_bzero(sub, len + 1);
	i = 0;
	while (i + start < ft_strlen(s) && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

static unsigned int	count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			while (*s && *s == c)
				s++;
	}
	return (i);
}

static int	find_char_index(const char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

char	**ft_split(const char *s, char c)
{
	char	**list;
	int		x;
	int		a;

	if (!s)
		return (NULL);
	list = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!list)
		return (NULL);
	a = 0;
	while (*s)
	{
		x = 0;
		if (*s != c)
		{
			x = find_char_index(s, c);
			list[a++] = ft_substr(s, 0, x);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	list[a] = 0;
	return (list);
}
