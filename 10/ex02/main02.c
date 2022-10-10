/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 14:46:16 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int		array[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
	int		*result;
	int		i;

	result = ft_map(array, 10, &ft_addnbr);
	i = -1;
	while (++i < 10)
		printf("%d\n", result[i]);
	return (0);
}
