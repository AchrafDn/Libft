/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:32:36 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/30 19:33:27 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

// int main ()
// {
// 	t_list *head;
// 	t_list *temp;
	
// 	head = ft_lstnew("achraf");
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("1")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("4")));
// 	ft_lstadd_front(&head, ft_lstnew(ft_strdup("first one")));
// 	temp = head;
// 	while(temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstdelone(head->next->next, free);
// 	printf("\na;%s;\n",head->next->content);
// 	while(head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// 	printf("number of nodes: %i", ft_lstsize(head));
// }
