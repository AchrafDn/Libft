/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:56:29 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/17 22:21:15 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(const char *f, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((f[i] || s[i]) && i < n)
	{
		if (f[i] == s[i])
			i++;
		else
			return ((unsigned char)f[i] - (unsigned char)s[i]);
	}
	return (0);
}

// int main(void)
// {
// 	char st[] = "test\200";
// 	char s[] = "test\0";
// 	printf("%i", ft_strncmp(st, s, 6));
// }
