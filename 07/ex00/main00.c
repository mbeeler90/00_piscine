/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/25 18:26:06 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

char	*ft_strdup(char *src);

int		main(void)
{
	char 	*string1;
	char	*string2;
	char	*string3;
	char	*string4;

	string1 = "some string";
	string2 = "with some other signe 5*60-/=";
	string3 = "FAILED!";

	string4 = ft_strdup(string1);
	printf("%s\n", string4);
	printf("%s\n", ft_strdup(string1));
	printf("%s\n", strdup(string1));
	printf("%s\n", ft_strdup(string2));
	printf("%s\n", strdup(string2));
	printf("%s\n", ft_strdup(string3));
	printf("%s\n", strdup(string3));
	return (0);
}
