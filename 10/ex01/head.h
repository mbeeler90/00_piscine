/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:04 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 13:45:36 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c);
void    ft_putnbr(int number);
void 	ft_foreach(int *tab, int length, void(*f)(int));

#endif