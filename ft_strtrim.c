/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:02:23 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/31 23:04:05 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	if (!s || !set)
		return (NULL);
	while (s[i] && ft_strchr(set, s[i]))
		s++;
	if (ft_strlen(s) > 0)
		j = ft_strlen(s) - 1;
	else
		j = 0;
	while (s[j] && ft_strchr(set, s[j]))
		j--;
	p = ft_substr(s, 0, j + 1);
	return (p);
}
