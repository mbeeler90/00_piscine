/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 06:26:16 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 12:50:39 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calculate_length(int argc, char **argv)
{
	int		i;
	int		j;
	int		length;

	i = 1;
	j = 0;
	length = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			length++;
			j++;
		}
		i++;
		j = 0;
	}
	return (length);
}

int		iterate_words(int argc, char **argv, char **string, int length)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	str = (char*)malloc(sizeof(str) * (length + argc));
	if (str == 0)
	{
		*string = str;
		return (0);
	}
	length = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			str[length++] = argv[i][j++];
		str[length++] = '\n';
		i++;
	}
	str[length - 1] = '\0';
	*string = str;
	return (0);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		length;

	length = calculate_length(argc, argv);
	iterate_words(argc, argv, &string, length);
	return (string);
}
