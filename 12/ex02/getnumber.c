/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 05:38:08 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/02 05:39:15 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		getnumber(char **argv)
{
	int		i;
	int		num;

	num = 0;
	i = -1 + sign;
	if (sign == 1)
		sig = -1;
	while (str[++i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i] - '0';
	return (num * sig);
}