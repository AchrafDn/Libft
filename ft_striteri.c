/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:47:13 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/28 17:02:25 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	nb;

	if (!s || !f)
		return ;
	i = 0;
	nb = ft_strlen(s);
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
