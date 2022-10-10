/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:18:03 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/05 07:36:09 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int i);

int		rush00(int x, int y);

int		main(int argc, char **argv)
{
	int num1;
	int num2;

	num1 = argv[1][0] - '0';
	num2 = argv[2][0] - '0';
	rush00(num1, num2);
	return (0);
}
