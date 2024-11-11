/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:31:51 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 17:02:44 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief The ft_lstmap() function creates a new list by applying 
 * the function 'f' to each element of the given list 'lst'.
 * @param lst The list to iterate over.
 * @param f The function to apply to each element.
 * @param del The function to delete the content of an element if needed.
 * @return A new list, or NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
	{
	t_list	*new_l;
	t_list	*new_elem;

	new_l = NULL;
	while (lst)
	{
		new_elem = malloc(sizeof(t_list));
		if (NULL == new_elem)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		new_elem->content = f(lst->content);
		new_elem->next = NULL;
		ft_lstadd_back(&new_l, new_elem);
		lst = lst->next;
	}
	return (new_l);
}
