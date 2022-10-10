/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 07:15:38 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/04 16:42:04 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

int		get_x(char *string)
{
	int		x;

	x = 0;
	while (string[x] != '\n' && string[x] != '\0')
		x++;
	return (x + 1);
}

int		get_y(char *string)
{
	int		y;
	int		i;

	i = 0;
	y = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

int		check_lines(char c, int *xyji, char *symbol, int k)
{
	if ((xyji[3] + 1) % xyji[0] == 1)
	{
		if (c != symbol[k * 3])
			return (0);
	}
	else if ((xyji[3] + 1) % xyji[0] == xyji[0] - 1)
	{
		if (c != symbol[k * 3 + 2])
			return (0);
	}
	else if ((xyji[3] + 1) % xyji[0] == 0 && k != 0)
	{
		if (c != '\n')
			return (0);
	}
	else
	{
		if (c != symbol[k * 3 + 1])
			return (0);
	}
	return (1);
}

int		rush(char *string, int *xyji, char *symbol)
{
	xyji[3] = -1;
	xyji[2] = 1;
	while (string[++xyji[3]] != '\0')
	{
		if (string[xyji[3]] == '\n')
			xyji[2]++;
		if (xyji[2] == 1)
		{
			if (check_lines(string[xyji[3]], xyji, symbol, 0) == 0)
				return (0);
		}
		else if (xyji[2] < xyji[1])
		{
			if (check_lines(string[xyji[3]], xyji, symbol, 1) == 0)
				return (0);
		}
		else
		{
			if (check_lines(string[xyji[3]], xyji, symbol, 2) == 0)
				return (0);
		}
	}
	return (1);
}
