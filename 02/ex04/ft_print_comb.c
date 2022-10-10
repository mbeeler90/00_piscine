/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:46:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/19 20:04:15 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	ft_print_comb(void)
{
	char		i;
	char		j;
	char		k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}
			k = 2;
			j++;
		}
		j = 1;
		i++;
	}
}
