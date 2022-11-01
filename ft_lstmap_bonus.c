/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:49:33 by adadoun           #+#    #+#             */
/*   Updated: 2022/11/01 15:41:55 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;
	
	if (!lst || !f || del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	lst = lst->next;
	while(lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ptr);
		lst = lst->next;
	}
	return (head);
}

void	*f(void *content)
{
	int i = 0;
	char *ptr = (char *)content;
	while(ptr[i])
	{
		ptr[i] = 'X';
		i++;
	}
	return((void *)ptr);
}

int main()
{
	t_list	*head;
	t_list	**ptr;

	head = ft_lstnew(ft_strdup("Achraf"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("1")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
	ptr = &(ft_lstmap(head, f, free));
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;	
	}
	while(ptr[0])
	{
		printf("hi\n");
		printf("%s\n", ptr[0]->content);

		ptr[0] = ptr[0]->next;	
	}
}