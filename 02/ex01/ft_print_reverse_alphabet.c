/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:13:17 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/18 17:53:16 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(alphabet);
		alphabet--;
		i++;
	}
}
