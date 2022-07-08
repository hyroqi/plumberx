/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:55:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 04:31:13 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	childpeon(char *argv[], char *envp[], int *plumber)
{
	int			fdrd;
	char		**path;
	char		**cmd;
	int			i;

	i = 0;
	close(plumber[0]);
	fdrd = open(argv[1], O_RDONLY);
	replacefd(plumber[1], 1);
	replacefd(fdrd, 0);
	cmd = ft_split(argv[2], ' ');
	while (!ft_strnstr(envp[i], "PATH", 4))
		i++;
	path = pathfinder(envp[i], cmd[0]);
	i = 0;
	while (path[i])
	{
		execve(path[i], cmd, envp);
		i++;
	}
	perror("Execve Failed.\n");
}

void	parentpeon(char *argv[], char *envp[], int *plumber)
{
	int			fdwr;
	char		**path;
	char		**cmd;
	int			i;

	i = 0;
	close(plumber[1]);
	fdwr = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	replacefd(plumber[0], 0);
	replacefd(fdwr, 1);
	cmd = ft_split(argv[3], ' ');
	while (!ft_strnstr(envp[i], "PATH", 4))
		i++;
	path = pathfinder(envp[i], cmd[0]);
	i = 0;
	while (path[i])
	{
		execve(path[i], cmd, envp);
		i++;
	}
	perror("Execve Failed.\n");
}

int	main(int argc, char *argv[], char *envp[])
{
	int	plumber[2];
	int	pid;

	if (argc != 5)
		perror("4 Argumemts not given.\n");
	if (pipe(plumber) != 0)
		printf("Failed to pipe\n");
	pid = fork();
	if (pid == -1)
		perror("Failed to fork");
	if (pid == 0)
		childpeon(argv, envp, plumber);
	else
	{
		waitpid(pid, NULL, 0);
		parentpeon(argv, envp, plumber);
	}
	return (0);
}
