/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:10:58 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/31 20:23:40 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size )
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*s;

	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	des = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		des[i] = s[i];
		i++;
	}
	return (dest);
}
