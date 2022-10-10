/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:34:34 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 10:35:23 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (2);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				nb = ft_find_next_prime(nb + 1);
			i++;
		}
	}
	return (nb);
}
