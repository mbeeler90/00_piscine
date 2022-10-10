/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:29:52 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/03 11:52:43 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(void *s1, void *s2)
{
	int i;
	char *str1;
	char *str2;
	int num;
	
	str1 = (char*)s1;
	str2 = (char*)s2;
	i = 0;
	
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		i++;
	}
	num = str1[i] - str2[i];
	return (num);
}
