/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:34:57 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 04:31:15 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle [j] && needle[j] != '\0' && j + i < n)
			j++;
		if (j == (size_t)ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
