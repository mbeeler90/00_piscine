/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 18:12:16 by mbeeler          ###   ########.fr       */
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

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	string_1_1[] = "aaaaaa";
	char	string_1_2[] = "aaaaba";
	char	string_2_1[] = "aaaaaa";
	char	string_2_2[] = "abaaaa";
	char	string_3_1[] = " aaaaa";
	char	string_3_2[] = "aaaaa ";
	char	string_4_1[] = "aaaaaa";
	char	string_4_2[] = "aaabaa";
	int		n = 4;
	
	printf("%d\n", ft_strncmp(string_1_1, string_1_2, n));
	printf("%d\n", strncmp(string_1_1, string_1_2, n));
	printf("%d\n", ft_strncmp(string_2_1, string_2_2, n));
	printf("%d\n", strncmp(string_2_1, string_2_2, n));
	printf("%d\n", ft_strncmp(string_3_1, string_3_2, n));
	printf("%d\n", strncmp(string_3_1, string_3_2, n));
	printf("%d\n", ft_strncmp(string_4_1, string_4_2, n));
	printf("%d\n", strncmp(string_4_1, string_4_2, n));

	return (0);
} 
