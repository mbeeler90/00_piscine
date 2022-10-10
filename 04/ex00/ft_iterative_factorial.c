/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 07:29:53 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/21 07:29:57 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		number;

	number = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		number *= nb;
		nb--;
	}
	return (number);
}
