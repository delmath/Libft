/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:56:55 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/12 18:52:47 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_lstsize() function counts the number of elements 
 * in the list 'lst'.
 * @param lst The list to count elements in.
 * @return The number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*tmp;

	size = 0;
	tmp = lst;
	while (NULL != tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
