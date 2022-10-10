/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 06:56:29 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 08:57:54 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	t_func	f[5];
	char	*op;

	f[0] = &addition;
	f[1] = &minus;
	f[2] = &division;
	f[3] = &mult;
	f[4] = &modular;
	if (argc == 4)
	{
		op = argv[2];
		if (op[1] == '\0' && (op[0] == '+' || op[0] == '-' || op[0] == '/' ||
			op[0] == '*' || op[0] == '%'))
		{
			putnbr(doop(argv[1], argv[2], argv[3], f));
			putchar('\n');
		}
		else
		{
			putnbr(0);
			putchar('\n');
		}
	}
	return (0);
}
