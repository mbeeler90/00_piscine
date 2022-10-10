/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:04 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 14:27:20 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c);
int	    ft_addnbr(int number);
int 	*ft_map(int *tab, int length, int (*f) (int));

#endif