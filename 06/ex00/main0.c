/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 07:57:53 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 13:58:55 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	ft_swap(int *a, int *b);

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	string_1_1[] = "a test!";
	char	string_1_2[] = "this is a test!";
	char	string_2_1[] = "This is a test!";
	char	string_2_2[] = "This is a test!";
	char	string_3_1[] = "This is a test!";
	char	string_3_2[] = "his is a t";
	char	string_4_1[] = "this is a test!";
	char	string_4_2[] = "ggggggggggg";
	int 	i1;
	int		i2;
	int		i3;
	int		i4;

	i1 = 1;
	i2 = -45;
	i3 = 33;
	i4 = -22222;
	ft_putchar('x');
	ft_putchar('\\');
	ft_putchar('\n');
	ft_putstr("This should show: Test1!");
	ft_putchar('\n');
	ft_putstr("Test1!");
	ft_putchar('\n');
	printf("%d\n", ft_strlen("1234567"));
	printf("%d\n", ft_strlen("12345678901234567890"));
	ft_swap(&i1, &i2);
	ft_swap(&i3, &i4);
	printf("%d / %d\n", i1, i2);
	printf("%d / %d\n",i3, i4);
	
	printf("%d\n", ft_strcmp(string_1_1, string_1_2));
	printf("%d\n", strcmp(string_1_1, string_1_2));
	printf("%d\n", ft_strcmp(string_2_1, string_2_2));
	printf("%d\n", strcmp(string_2_1, string_2_2));
	printf("%d\n", ft_strcmp(string_3_1, string_3_2));
	printf("%d\n", strcmp(string_3_1, string_3_2));
	printf("%d\n", ft_strcmp(string_4_1, string_4_2));
	printf("%d\n", strcmp(string_4_1, string_4_2));

	return (0);
}
