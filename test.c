char	*ft_res(char *ptr, const char *s, char c)
{
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j != 0)
		{
			ptr[k] = ft_substr(s, i, j);
			if (!ptr[k])
			{
				ft_free(ptr);
				return (NULL);
			}
			i = i + j;
			k++;
		}
		else
			i++;
	}
	ptr[k] = 0;
	return (ptr);
}