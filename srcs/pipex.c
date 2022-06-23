/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:55:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/06/23 20:05:37 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pipex.h"

void childWorker(char *argv[], char *envp[], int *plumber[])
{

}

void parentWorker(char *argv[], char *envp[], int *plumber[])
{
	
}

void pipex(char *argv[], char *envp[], int *plumber[])
{
	
}


int main(int argc,char *argv[], char *envp[])
{
	const int fdin = open(argv[1], O_RDONLY);
	const int fdout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	

}
