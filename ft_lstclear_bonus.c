/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:42:33 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/31 20:44:42 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!lst || del == NULL)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}

// int main()
// {
//     t_list  *head;
//     t_list  *temp;
//     t_list  *temp2;

//     head = ft_lstnew(ft_strdup("Achraf"));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("1")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("4")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("5")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("6")));
//     temp = head;
//     while(temp)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
//     printf("-\n");
//     temp = head->next->next->next;
//     ft_lstclear(&head, free);
//     while(head)
//    {
//         printf("%s\n", head->content);
//         head = head->next;
//     }
// }