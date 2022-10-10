/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 06:55:02 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 09:02:56 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>

typedef	int	(*t_func) (int, int);
int		addition(int n1, int n2);
int		division(int n1, int n2);
void	putchar(char c);
int		minus(int n1, int n2);
int		modular(int n1, int n2);
int		mult(int n1, int n2);
void	putnbr(int number);
int		doop(char *s1, char *op, char *s2, int (*f[5]) (int, int));
int		get_number(char *str, int sign);

#endif
