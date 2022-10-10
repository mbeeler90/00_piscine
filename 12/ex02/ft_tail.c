/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 09:09:59 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/02 05:45:26 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	stdout(char **av, int i)
{
	int		fd;
	char	buf;

	if ((fd = open(av[i], O_RDONLY)) == -1)
	{
		putstr(2, "cat: ");
		putstr(2, av[i]);
		putstr(2, ": No such file or directory\n");
	}
	else
		while (read(fd, &buf, 1) != 0)
			putchar(1, buf);
	close(fd);
}

void	stdin(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
		putchar(1, buf);
}

void	errormsg(char **av, int i)
{
	putstr(2, "tail: invalid option -- '");
	putchar(2, av[i][1]);
	putstr(2, "'\nTry 'tail --help' for more information.\n");
}

void	errormsg2(char **av, int i)
{
	int		j;

	j = 1;
	putstr(2, "tail: invalid number of bytes: ‘");
	while (av[i][++j] != '\0')
		putchar(2, av[i][j]);
	putstr(2, "'\n");
}

int		checkerror(int argc, char** argv)
{
	int		i;
	int		dashc;

	dashc = 0;
	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] != '\0')
		{
			if (argv[i][1] == 'c')
			{
				j = 1;
				while (argv[i][++j] != '\0' && dashc >= 0)
				{
					if (argv[i][j] >= '0' && argv[i][j] <= '9') //should include that there can be a - before number --> prints0
						dashc = 1;
					else
						dashc = -1;
				}
			}
			else
			{
				errormsg1(argv, i);
				return (-1);
			}
			if (dashc == -1)
			{
				errormsg2(argv, i);
				return (-1);
			}
		}
	}
	return (dashc);
}

int		main(int argc, char **argv)
{
	int		i;
	int		dashc;
	int		number;
	int		dashelem;
	int		dashplus;

	dashplus = 0;
	dashelem = 0;
	number = 0;
	i = 0;
	dashc = 0;
	if ((dashc = checkerror(argc, argv)) == -1)
		return (1);
	if (dashc == 1)
	{
		number = getnumber(argv);
		dashelem = getdashelem();
		dashplus = getdashplus();
	}
	i = 0;
	if (argc == 1)
		stdin1();
	if (dashc == 0)
	{
		while (++i < argc)
		{
			if (argv[i][0] == '-')
				stdin1();
			else
				stdout1(argv, i);
		}
	}
	else
	{
		if (dashplus == 0)
		{
			while (++i < argc)
			{
				if (argv[i][0] == '-' && argv[i][1] == '\0')
					stdin2();
				else
					stdout2(argv, i);
			}
		}
		else
		{
			while (++i < argc)
			{
				if (argv[i][0] == '-' && argv[i][1] == '\0')
					stdin3();
				else
					stdout3(argv, i);
			}
		}
	}
	return (0);
}
