/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:08:00 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/31 21:30:50 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_res(int signe)
{
	if (signe > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		p;
	size_t	res;

	res = 0;
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
		res = (res * 10) + (str[i] - 48);
		if (res > 9223372036854775807)
			return (ft_res(p));
		i++;
	}
	return (res * p);
}
