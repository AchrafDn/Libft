/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:47:25 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/20 01:00:41 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (unsigned long)count * size);
	return ((void *)p);
}
