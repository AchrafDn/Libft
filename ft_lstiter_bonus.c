/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:53:55 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/31 20:47:24 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	if (!lst || !f)
		return ;
	p = lst;
	while (p)
	{
		f(p->content);
		p = p->next;
	}
}

// void	f(void *c)
// {
// 	char *s;	
// 	s = (char *)c;
// 	int i = 0;
// 	while(s[i])
// 	{
// 		s[i] = 'z';
// 		i++;
// 	}
// }
// int main()
// {
//     t_list  *header;
//     t_list  *p;
//     // const char arr[] = "Achraf";
//     header = ft_lstnew(ft_strdup("Achraf"));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("1")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("2")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("3")));
//     p = header;
//     ft_lstiter(p, &f);
//     while(p)
//     {
//         printf("%s\n", p->content);
//         p = p->next;
//     }
// }

// ft_strdup("Achraf") "Achraf"