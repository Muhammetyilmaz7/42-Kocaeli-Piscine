/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int ln, int clm, int x, int y)
{
	if ((ln == 1 && clm == 1) || (ln == y && clm == 1))
		ft_putchar('A');
	else if ((ln == 1 && clm == x) || (ln == y && clm == x))
		ft_putchar('C');
	else if ((clm == 1 || clm == x) || (ln == 1 || ln == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	ln;
	int	clm;

	ln = 1;
	while (ln <= y)
	{
		clm = 1;
		while (clm <= x)
		{
			check(ln, clm, x, y);
			clm++;
		}
		ft_putchar('\n');
		ln++;
	}
}
