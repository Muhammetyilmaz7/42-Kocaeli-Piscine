/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	calculate(int n, int i, int *p_digit)
{
	int	j;

	if (i == 0)
		p_digit[i] = 0;
	else
		p_digit[i] = p_digit[i - 1] +1;
	while (p_digit[i] <= 10 + i - n)
	{
		if (i < n - 1)
			calculate(n, i + 1, p_digit);
		if (i == n - 1)
		{
			if (p_digit[n - 1] != n - 1)
				write(1, ", ", 2);
			j = 0;
			while (j < n)
			{
				ft_putchar(p_digit[j] + 48);
				j++;
			}
		}
		p_digit[i]++;
	}
}

void	ft_print_combn(int n)
{
	int	digit[9];
	int	i;

	i = 0;
	calculate(n, i, digit);
}
