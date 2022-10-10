/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/27 14:11:59 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		ft_putnbr(int num)
{
	printf ("%d\n", num);
	return (0);
}

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char 	*string;
	char	**array;
	int		i;
	
/*	array = (char**)malloc(sizeof(char*) * 3);
	array[0] = (char*)malloc(sizeof(char) * 4);
	array[1] = (char*)malloc(sizeof(char) * 10);
	array[2] = (char*)malloc(sizeof(char) * 9);
	array[3] = (char*)malloc(sizeof(char) * 1);
	array[0] = "abc";
	array[1] = "lsjdgflkj";
	array[2] = "lksdjfl";
	array[3] = 0;
*/	string = "  \n This is a string\tto test everything  at\vonce    !";
	array = ft_split_whitespaces(string);
	i = 0;
	while (array[i] != 0)
	{
		printf("%s\n", array[i]);
		i++;
	}
	if (array[i] == 0)
		printf("%s\n", array[i]);
	return (0);
}
