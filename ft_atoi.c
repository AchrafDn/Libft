/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:08:00 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/28 17:29:13 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		p;
	size_t	m;
	size_t	res;

	res = 0;
	m = 0;
	p = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		m = str[i] - 48;
		res = (res * 10) + m;
		if (res > 9223372036854775807 && p > 0)
			return (-1);
		else if (res > 9223372036854775807 && p < 0)
			return (0);
		i++;
	}
	return (res * p);
}

// int main ()
// {
// 	char n[40] = "-99999999999999999999999999";
// 	printf ("%i", ft_atoi(n));
// 	printf ("%i", atoi(n));
// }
