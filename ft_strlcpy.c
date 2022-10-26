/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:54:27 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/19 00:28:27 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t ds)
{
	size_t	i;

	i = 0;
	if (ds == 0)
		return (ft_strlen(src));
	while (src[i] && i < ds - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main (void)
// {
// 	char src[] = "";
// 	char dst[] = "Achraf123456";

// 	printf("%lu\n", ft_strlcpy(dst, src, 4));
// 	printf("ab%s", dst);
// 	return (0);
// }
