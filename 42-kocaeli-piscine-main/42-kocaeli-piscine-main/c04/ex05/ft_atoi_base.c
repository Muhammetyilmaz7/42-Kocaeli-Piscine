/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	checksize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	isbasevalid(char *base, int len)
{
	int	i;
	int	j;

	if (len < 2)
		return (0);
	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == '+' || base[i] == '-' || base[i] == 127)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	firstintandsign(char *str, long int *p_i)
{
	long int	i;
	long int	sign;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*p_i = i;
	return (sign);
}

char	base_alphabet(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (c == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	len;
	long int	sign;
	long int	i;
	long int	nb;
	long int	plus;

	len = checksize(base);
	if (isbasevalid(base, len) == 1)
	{
		sign = firstintandsign(str, &i);
		plus = base_alphabet(str[i], base);
		nb = 0;
		while (plus != -1 && str[i] != '\0')
		{
			nb = (nb * len) + plus;
			i++;
			plus = base_alphabet(str[i], base);
		}
		return (nb * sign);
	}
	return (0);
}
/*
int    main ()
{
	char	x[] = "  -+-+-31e29f348r65";
    //char	eight[] = "poneyvif";
    //char	ten[] = "0123456789";
    //char	two[] = "01";
    //char	sixteen[] = "0123456789ABCDEF";
	//char	sekiz[] = "12345678";
	char	five[] = "12345";
   	printf("%d", ft_atoi_base(x, five));
}
*/
