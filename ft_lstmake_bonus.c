/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmake_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:07:03 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 18:44:44 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmake_bonus(void **tab, size_t size, void (*del)(void *))
{
	t_list	*lst;
	t_list	*tmp;
	size_t	i;

	lst = NULL;
	i = 0;
	while (i < size)
	{
		tmp = malloc(sizeof(t_list));
		if (!tmp)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		tmp->content = tab[i];
		tmp->next = NULL;
		ft_lstadd_back(&lst, tmp);
		i++;
	}
	return (lst);
}

void	del(void *content)
{
	free(content);
}

int	main(int args, char **argv)
{
	ft_lstprint(ft_lstmake_bonus((void **)argv, args, del), 1);
}
