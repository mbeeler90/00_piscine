/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 05:08:36 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

int		*ft_range(int min, int max);

int		main(void)
{
	int *array1;
	int *array2;
	int *array3;
	int i;
	
	i = 0;
	array1 = ft_range(2, 10);
	array2 = ft_range(-12, 7);
	array3 = ft_range(44, 22);
	while (array1[i] != '\0')
	{
		printf("%d\n", array1[i]);
		i++;
	}

	i = 0;
	while (i < 19)
	{
		printf("%d\n", array2[i]);
		i++;
	}

	if (array3 == 0)
		printf("%s\n", "NULL");
	return (0);
}
