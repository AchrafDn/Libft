/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:16:02 by adadoun           #+#    #+#             */
/*   Updated: 2022/10/30 19:16:47 by adadoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

// int main ()
// {
//     t_list *head;
//     char str[] = "Achraf";

//     head = ft_lstnew(ft_strdup(str));
//     printf("%s\n", head->content);
//     ft_lstdelone(head, &f);
//     printf("%s\n", head->content);
// }