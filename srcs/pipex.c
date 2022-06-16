/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:55:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/06/16 20:16:27 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc,char *argv[])
{
 //   int     fd[2];
 //   char    buffer[1024];

    if (argc != 5)
    {
        ft_putstr_fd("4 Arguments only! No more. No less.", 1);
    }
    else
    {
        printf("%s %s %s %s", argv[0], argv[1], argv[2], argv[3]);
    }
    return (0);
}
