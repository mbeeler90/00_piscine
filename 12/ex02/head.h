/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 06:55:02 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/01 14:56:10 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <fcntl.h>

int		str_len(char *str);
void	putstr(int fd, char *str);
void	putchar(int fd, char c);
void	stdout(char **av, int i);
void	stdin(void);

#endif
