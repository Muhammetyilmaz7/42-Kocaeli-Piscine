/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		else if (x >= 46341)
			return (0);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(144));
}
*/
