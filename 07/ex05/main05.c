/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 16:00:21 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		ft_putnbr(int num)
{
	printf ("%d\n", num);
	return (0);
}

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **table);

int		main(void)
{
	char 	*string;
	
	string = "   This is a string\tto test\f everything \r at\vonce    !";
	ft_print_words_tables(ft_split_whitespaces(string));
	return (0);
}
