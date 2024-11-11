/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:07:40 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 18:14:42 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief The ft_lstdelone() function deletes and frees the given element
 * of the list. The memory of 'content' is freed using the function 'del'.
 * @param lst The element to free.
 * @param del The function used to delete the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (NULL != lst || NULL != del)
	{
		del(lst->content);
		free(lst);
	}
}
