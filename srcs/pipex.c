/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:55:54 by hgabriel          #+#    #+#             */
/*   Updated: 2022/07/06 04:03:12 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pipex.h"

void childWorker(char *argv[], char *envp[], int *plumber[])
{
	const int fdrd;
	fdrd = open(argv[1], O_RDONLY);
}

void parentWorker(char *argv[], char *envp[], int *plumber[])
{
	const int fdwr;
	fdwr = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);	
}

void pipex(char *argv[], char *envp[], int *plumber[])
{
	
}


int main(int argc,char *argv[], char *envp[])
{


	

}
