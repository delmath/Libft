/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:44:58 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 16:57:55 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief The ft_lstnew() function creates a new list element.
 * @param content The content to create the new element with.
 * @return A new list element, or NULL if the allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (NULL == new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
