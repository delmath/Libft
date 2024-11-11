/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:17:43 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 16:59:36 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_lstclear() function clears the list.
 * @param lst The list to be cleared.
 * @param del Function to delete the content of an element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (NULL != *lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
