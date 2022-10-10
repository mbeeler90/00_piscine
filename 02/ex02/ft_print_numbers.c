/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:32:40 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/18 17:53:00 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	ft_print_numbers(void)
{
	char	number;
	int		i;

	number = '0';
	i = 0;
	while (i < 10)
	{
		ft_putchar(number);
		i++;
		number++;
	}
}
