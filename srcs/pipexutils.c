/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipexutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:39:58 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 04:22:42 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	replacefd(int in, int out)
{
	dup2(in, out);
	close(in);
}

int	count_size(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

char	**pathfinder(char *pathpath, char *cmd)
{
	int		i;
	char	*slashcmd;
	char	**pathlist;
	char	**pathcmd;

	i = 0;
	slashcmd = ft_strjoin("/", cmd);
	pathlist = ft_split(ft_strchr(pathpath, '/'), ':');
	pathcmd = malloc(sizeof(char *) * (count_size(pathlist) + 1));
	while (pathlist[i])
	{
		pathcmd[i] = ft_strjoin(pathlist[i], slashcmd);
		i++;
	}
	return (pathcmd);
}
