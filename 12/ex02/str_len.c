/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:28:32 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/01 10:34:08 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}