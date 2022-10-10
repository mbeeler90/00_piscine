/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:10:35 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 11:50:23 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str != '\0')
	{
		while (to_find[i] == *str)
		{
			i++;
			str++;
			if (to_find[i] == '\0')
				return (str - i);
		}
		if (i == 0)
			str++;
		i = 0;
	}
	return (0);
}
