/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 09:09:59 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/03 17:57:40 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	stdout(char **av, int i)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(av[i], O_RDONLY)) == -1)
	{
		putstr(2, "cat: ");
		putstr(2, av[i]);
		putstr(2, ": No such file or directory\n");
	}
	else
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			putstr(1, buf);
		}
	close(fd);
}

void	stdin(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		putstr(1, buf);
	}
}

void	errormsg(char **av, int i)
{
	putstr(2, "cat: invalid option -- '");
	putchar(2, av[i][1]);
	putstr(2, "'\nTry 'cat --help' for more information.\n");
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] != '\0')
		{
			errormsg(argv, i);
			return (1);
		}
	}
	i = 0;
	if (argc == 1)
		stdin();
	while (++i < argc)
	{
		if (argv[i][0] == '-')
			stdin();
		else
			stdout(argv, i);
	}
	return (0);
}
