/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:44:00 by mevangel          #+#    #+#             */
/*   Updated: 2023/04/11 00:47:39 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	// new_lst = ft_lstnew((t_list *)(f(lst->content)));
	// if (!new_lst)
	// {
	// 	ft_lstclear(&new_lst, del);
	// 	return (NULL);
	// }
	// lst = lst->next;
	// temp = new_lst;
	new_lst = NULL;
	new_node = NULL;
	temp = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew((t_list *)(f(lst->content)));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		if (!new_lst)
			new_lst = new_node;
		else
			temp->next = new_node;
		temp = new_node; //same as: temp = temp->next ?
		lst = lst->next;
	}
	return (new_lst);
}
