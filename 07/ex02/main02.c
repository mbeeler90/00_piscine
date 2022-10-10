/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 05:53:21 by mbeeler          ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int *array1;
	int *array2;
	int *array3;
	int i;

	i = ft_ultimate_range(&array1, 3, 8);
	printf("i: %d\n", i);
	i = 0;
	while (array1[i] != '\0')
	{
		printf("a: %d\n", array1[i]);
		i++;
	}

	i = ft_ultimate_range(&array2, -12, 9);
	printf("i: %d\n", i);
	i = 0;
	while (i < 21)
	{
		printf("a: %d\n", array2[i]);
		i++;
	}
	i = ft_ultimate_range(&array3, 12, 8);
	printf("i: %d\n", i);
	if (array3 == 0)
		printf("a: %s\n", "NULL");
	return (0);
}
