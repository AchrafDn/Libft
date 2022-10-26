/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:15:17 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/18 22:54:15 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (src < dst)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main (void)
// {
// 	int src[] = {1,2,3};
// 	int dst[] = {7,8,9,7,8};
// 	int i = 0;
// 	ft_memmove(dst, src, sizeof(int) * 3);
// 	while (i < 5)
// 	{
// 		printf("%i ", dst[i]);
// 		i++;
// 	}
// 	return(0); 
// }