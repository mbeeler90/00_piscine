/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 06:59:29 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		ft_putnbr(int num)
{
	printf ("%d\n", num);
	return (0);
}

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
