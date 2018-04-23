/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adondera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:01:40 by adondera          #+#    #+#             */
/*   Updated: 2018/01/15 14:43:57 by adondera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include "libft/ft_putstr.c"
#include "get_next_line.c"
#include "libft/ft_putchar.c"
#include "libft/ft_strdel.c"
#include "libft/ft_memdel.c"

int	main(int argc, char *argv[])
{
	int		filedesc;
	char	**line;
	char	*txt;

	argc += 0;
	line = &txt;
	filedesc = open(argv[1], O_RDONLY);
	if (filedesc == -1)
	{
		ft_putstr("open() error!\n");
		return (1);
	}
	while (get_next_line(filedesc, line))
	{
		ft_putstr(*line);
		printf("\n");
		ft_strdel(&(*line));
	}
	if (close(filedesc) == -1)
	{
		ft_putstr("close() error!\n");
		return (1);
	}
	return (0);
}
