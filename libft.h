/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:08:06 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/27 23:49:05 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stddef.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h> //printf

int		ft_isalnum( int c);
int		ft_isalpha( int c);
int		ft_atoi(const char *str);
int		ft_isascii(int c);
int		ft_isdigit(int c );
int		ft_isprint(int c);
void	*ft_memset(void *p, int v, size_t n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *f, const char *s, size_t n);
int		ft_tolower(int str);
int		ft_toupper(int str);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy( void *dest, const void *src, size_t size );
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isdigit(int c );
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t ds);
size_t	ft_strlcat(char *dst, const char *src, size_t ds);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *s2);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif