/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:02:23 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/26 04:46:58 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	geti(char const	*s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int	k;

	i = 0;
	while(s1[i])
	{
		j = 0;
		k = 0;
		while (s2[j])
		{
			if(s1[i] == s2[j])
				k = 1;
			j++;
		}
		if (k != 0)
			i++;
		else
			return (i);
	}
	return (i);
}

static size_t	getj(char const	*s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int	k;

	i = ft_strlen(s1) - 1;
	while(s1[i])
	{
		j = 0;
		k = 0;
		while (s2[j])
		{
			if(s1[i] == s2[j])
				k = 1;
			j++;
		}
		if (k != 0)
			i--;
		else
			return (i);
	}
	return (i);
}
int main ()
{
	char str[] = "  -- X  +Achraf++*";
	prirntf ("--> %i\n--> %i", geti(str, " -!+*") ,getj(str, " -!+*"));
}
// char	*ft_strtrim(const char *s1, const char *s2)
// {
// 	int	i;
// 	int	j;
	
// 	j = 0;
// 	i = 0;
// 	if (!s1)
// 		return (NULL);
// 	// if (s2 = NULL || ft_strlen(s2) = 0)
// 	// 	return(ft_substr(s1, i, ft_strlen(s2)));
	
// }