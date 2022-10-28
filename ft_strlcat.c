/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:08:24 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/28 17:30:30 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t ds)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	size_t	x;
	if (!dst && ds == 0)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (ds == 0)
		return (srclen);
	x = dstlen;
	i = 0;
	
	while (src[i] && x + i < ds - 1)
	{
		dst[x + i] = src[i];
		i++;
	}
	if (ds > dstlen)
		dst[x + i] = '\0';
	if (dstlen > ds)
		return (srclen + ds);
	return (dstlen + srclen);
}
