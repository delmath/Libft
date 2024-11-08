/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:03:02 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 18:45:56 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst, size_t fd)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		ft_putchar_fd('[', fd);
		ft_putnbr_fd(i, fd);
		ft_putstr_fd("]( ", fd);
		ft_putstr_fd((char *)lst->content, fd);
		ft_putstr_fd(" )", fd);
		if (lst->next)
			ft_putstr_fd("->", fd);
		lst = lst->next;
		i++;
	}
	ft_putchar_fd('\n', fd);
}
