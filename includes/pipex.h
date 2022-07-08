/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:16:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/09 04:32:02 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/syscall.h>

void	replacefd(int in, int out);
char	**pathfinder(char *pathpath, char *cmd);
char	**ft_split(char const *s, char c);
size_t	ft_count(char const *str, char c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
size_t	ft_strlen(const char *c);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif