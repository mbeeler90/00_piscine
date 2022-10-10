/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 07:00:27 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 08:09:56 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	putnbr(int number)
{
	if (number < 0)
	{
		putchar('-');
		number *= -1;
	}
	if (number >= 10)
	{
		putnbr(number / 10);
		putnbr(number % 10);
	}
	else
	{
		putchar('0' + number);
	}
}
