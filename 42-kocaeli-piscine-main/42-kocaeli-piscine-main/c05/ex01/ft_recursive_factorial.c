/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	rs;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	rs = 1;
	if (nb > 1)
	{
		rs = nb * ft_recursive_factorial(nb - 1);
	}
	return (rs);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_recursive_factorial(1));
}
*/
