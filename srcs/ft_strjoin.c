/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:39:37 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 04:31:18 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		combstrlen;
	char	*buffer;
	char	*finalstr;

	combstrlen = (ft_strlen(s1) + ft_strlen(s2));
	if (s1 && s2)
	{
		buffer = (char *)malloc((combstrlen + 1) * sizeof(char));
		if (buffer)
		{
			finalstr = buffer;
			while (*s1 != '\0')
				*buffer++ = *s1++;
			while (*s2 != '\0')
				*buffer++ = *s2++;
			*buffer = '\0';
			return (finalstr);
		}
		return (NULL);
	}
	return (NULL);
}
