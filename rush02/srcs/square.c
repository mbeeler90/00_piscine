/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 07:15:38 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/05 07:45:08 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

int		check_lines_sqr(char c, int *xyji, int k)
{
	if (((xyji[3] + 1) % xyji[0] == 1) ||
		((xyji[3] + 1) % xyji[0] == xyji[0] - 1))
	{
		if (c == ' ' || c == '\n')
			return (0);
	}
	else if ((xyji[3] + 1) % xyji[0] == 0)
	{
		if (c != '\n')
			return (0);
	}
	else if (k != 1)
	{
		if (c == ' ' || c == '\n')
			return (0);
	}
	else
	{
		if (c != ' ')
			return (0);
	}
	return (1);
}

int		square(char *string, int *xyji)
{
	xyji[3] = -1;
	xyji[2] = 1;
	while (string[++xyji[3]] != '\0')
	{
		if (string[xyji[3]] == '\n')
			xyji[2]++;
		if (xyji[2] == 1)
		{
			if (check_lines_sqr(string[xyji[3]], xyji, 0) == 0)
				return (0);
		}
		else if (xyji[2] < xyji[1])
		{
			if (check_lines_sqr(string[xyji[3]], xyji, 1) == 0)
				return (0);
		}
		else
		{
			if (check_lines_sqr(string[xyji[3]], xyji, 2) == 0)
				return (0);
		}
	}
	return (1);
}
