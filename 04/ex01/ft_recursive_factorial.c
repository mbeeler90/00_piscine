/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 07:30:19 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 10:13:15 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
