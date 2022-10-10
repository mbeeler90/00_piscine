/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:30:09 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 09:13:13 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		get_number(char *str, int sign)
{
	int		i;
	int		num;
	int		sig;

	num = 0;
	i = -1 + sign;
	sig = 1;
	if (sign == 1)
		sig = -1;
	while (str[++i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i] - '0';
	return (num * sig);
}

int		doop(char *s1, char *op, char *s2, int (*f[5]) (int, int))
{
	int		i;
	int		sign1;
	int		sign2;
	char	*ops;

	ops = "+-/*%";
	sign1 = 0;
	sign2 = 0;
	if (s1[0] == '-')
		sign1 = 1;
	if (s2[0] == '-')
		sign2 = 1;
	if ((s1[sign1] >= '0' && s1[sign1] <= '9'
		&& s2[sign2] >= '0' && s2[sign2] <= '9'))
	{
		sign1 = get_number(s1, sign1);
		sign2 = get_number(s2, sign2);
		i = -1;
		while (++i < 5)
			if (op[0] == ops[i])
				return (f[i](sign1, sign2));
	}
	return (0);
}
