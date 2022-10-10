/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 05:54:44 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
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

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	*src;
	char	dest1[] = "Veeeeeeeeeeeeeery long statement!";
	char	dest2[] = "Veeeeeeeeeeeeeery long statement!";
	char	dest3[] = "Veeeeeeeeeeeeeery long statement!";
	char	dest4[] = "Veeeeeeeeeeeeeery long statement!";
	int		i;

	i = 0;
	src = "This is a \0test!";
	
	ft_strncpy(dest1, src, 8);
	while (i < 8)
		ft_putchar(dest1[i++]);
	i = 0;
	ft_putchar('\n');
	while (i < 8)
		ft_putchar(strncpy(dest2, src, 8)[i++]);
	ft_putchar('\n');
	
	i = 0;
	ft_strncpy(dest3, src, 50);
	while (i < 50)
		ft_putchar(dest3[i++]);
	ft_putchar('\n');
	i = 0;
	while (i < 50)
		ft_putchar(strncpy(dest4, src, 50)[i++]);
	ft_putchar('\n');
	return (0);
} 
