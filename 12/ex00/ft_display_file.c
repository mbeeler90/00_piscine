/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 09:09:59 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/03 17:46:41 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		if (argc == 1)
			putstr(2, "File name missing.\n");
		else
			putstr(2, "Too many arguments.\n");
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		putstr(2, "open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		putstr(1, buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}
