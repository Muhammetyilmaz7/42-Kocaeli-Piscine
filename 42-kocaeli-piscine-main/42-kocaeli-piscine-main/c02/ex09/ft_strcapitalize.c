/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyilma <muhyilma@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:41:47 by muhyilma          #+#    #+#             */
/*   Updated: 2023/07/21 15:44:03 by muhyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	capitalize(char *str)
{
	int	i;
	int	pre;

	i = 1;
	while (str[i] != '\0')
	{
		pre = i - 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!((str[pre] >= 'A' && str[pre] <= 'Z')
					|| (str[pre] >= '0' && str[pre] <= '9')
					|| (str[pre] >= 'a' && str[pre] <= 'z')))
			str[i] = str[i] - 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	capitalize(str);
	return (str);
}
