/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nums;
	int	range;
	int	i;

	range = max - min;
	if (min >= max)
		return (0);
	nums = (int *)malloc(range *(sizeof(int)));
	if (!nums)
		return (0);
	i = 0;
	while (i < range)
	{
		nums[i] = min + i;
		i++;
	}
	return (nums);
}
/*
#include <stdio.h>
int main()
{
	int min = 4;
	int max = 1;
	int range = max - min;
	int *nums = ft_range(min,max);
	int i = 0;
	while(i < range)
	{
		printf("i%d: %d\n",i,nums[i]);
		i++;
	}
	return (0);
}
*/
