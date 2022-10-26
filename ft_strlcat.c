/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:08:24 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/19 11:36:44 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t ds)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	size_t	x;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	x = dstlen;
	i = 0;
	if (ds == 0)
		return (srclen);
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
// int main(void)
// {
// 	char src[] = "";
// 	char dst[11] = "a";
// 	printf("%lu\n", ft_strlcat(dst, src, 0));
// 	printf("src : %s\n", src);
// 	printf("dst : %s", dst);
// 	return (0);
// }