/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/19 16:14:33 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char character)
{
	write (1, &character, 1);
	return (0);
}

int		ft_putnbr(int num)
{
	printf ("%d\n", num);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int 	n1;
	int		n2;
	int		division;
	int		modifier;

	n1 = 42;
	n2 = 17;
	division = 0;
	modifier = 0;
	ft_div_mod(n1, n2, &division, &modifier);
	ft_putnbr(division);
	ft_putnbr(modifier);
	return (0);
}
