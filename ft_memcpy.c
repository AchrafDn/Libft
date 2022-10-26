/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:10:58 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/20 01:13:49 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size )
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*s;

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

// int main ()
// {
// 	char *src = NULL;
// 	char *dst = NULL;
// 	printf("%s", ft_memcpy(src, dst, 4));
// }
