/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 17:42:08 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char	*array[] = {"11", "22", "33", (char*)0};
	char	*array2[] = {"1", "2", "3", (char*)0};

	printf("should print 0: %d\n", ft_any(array, &ft_addnbr));
	printf("should print 1: %d\n", ft_any(array2, &ft_addnbr));
	return (0);
}
