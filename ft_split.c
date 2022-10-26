/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:12:31 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/26 03:40:48 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int nword(const char *s, char c)
{
    int     nb;
    size_t  i;
    int     j;

    i = 0;
    nb = 0;
    while (s[i])
    {
        j = 0;
        while(s[i + j] && s[i + j] != c)
        {
            j++;
        }
        if (j != 0)
        {
            i = i + j;
            nb = nb + 1;
        }
        else
            i++;
    }
    return (nb);
}

static void	**ft_free(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i])
		s[i] = NULL;
	}
	free(s);
	s = NULL;
}
char	**ft_split(const char *s, char c)
{
	char **ptr;
	int		nb;
	size_t	i;
	size_t	j;
	int		k;
	
	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	nb = nword(s, c);
	ptr = malloc(sizeof(char *) * (nb + 1));
	if (!ptr)
		return (NULL);
	while(s[i])
	{
		j = 0;
		while(s[i + j] && s[i + j] != c)
			j++;
		if (j != 0)
		{
			ptr[k] = ft_substr(s, i, j);
			if (!ptr[k])
				return (ft_free(ptr[k]));
			i = i + j;
			k++;
		}
		else
			i++;
	}
	ptr[k] = 0;
	return (ptr);
}

