/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 18:41:23 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int		array[] = {11, 11, 11, 23, 111};
	int		array2[] = {11, 11, 11, 11, 10};
	int		array3[] = {11, 11, 11, 21, -5};
	int		array4[] = {11, 10, -6, -9, -11};
	int		array5[] = {11, 11, 13, 13, 11};

	printf("should print 1: %d\n", ft_is_sort(array, 5, &ft_addnbr));
	printf("should print 1: %d\n", ft_is_sort(array2, 5, &ft_addnbr));
	printf("should print 0: %d\n", ft_is_sort(array3, 5, &ft_addnbr));
	printf("should print 1: %d\n", ft_is_sort(array4, 5, &ft_addnbr));
	printf("should print 0: %d\n", ft_is_sort(array5, 5, &ft_addnbr));
	return (0);
}
