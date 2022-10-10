/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:44:46 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/20 12:27:58 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int		ft_putchar(char character);

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(alphabet);
		alphabet++;
		i++;
	}
}
