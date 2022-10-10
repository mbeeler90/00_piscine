/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:33:45 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 10:28:29 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		prime;
	int		i;

	i = 2;
	prime = 1;
	if (nb <= 1)
	{
		prime = 0;
		return (prime);
	}
	else if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				prime = 0;
			i++;
		}
	}
	return (prime);
}
