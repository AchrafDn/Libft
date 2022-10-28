/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:05:16 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/28 16:46:33 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 && len == 0)
		return (NULL);
	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s2[j] && s1[i + j] == s2[j] && j < len - i)
		{
			j++;
		}
		if (j == ft_strlen((char *)s2))
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

// int main ()
// {

//     // strlcat(((void *)0), b, 2);
//     // printf("dest --> %s , src ---> %s", dest, src);

//     printf("\n|%s|", ft_strnstr(((void *)0), "fake", 0));
// }
