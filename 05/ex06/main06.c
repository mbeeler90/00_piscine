/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/25 08:48:40 by mbeeler          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	string_2_1[] = "this is";
	char	string_2_2[] = "this is a";
	char	string_3_1[] = "This is a test!a";
	char	string_3_2[] = "This is a test!";
	char	string_4_1[] = "this is a test!";
	char	string_4_2[] = "this is fg";
	char	*string1;
	char	*string2;

	string1 = "this is";
	string2 = "this is a";
	
	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string_2_1, string_2_2));
	printf("%d\n", strcmp(string_2_1, string_2_2));
	printf("%d\n", ft_strcmp(string_3_1, string_3_2));
	printf("%d\n", strcmp(string_3_1, string_3_2));
	printf("%d\n", ft_strcmp(string_4_1, string_4_2));
	printf("%d\n", strcmp(string_4_1, string_4_2));

	return (0);
} 
