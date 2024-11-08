/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:57:17 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 13:52:40 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_bzero() function set a block of memory to zero.
 * @param s The memory to zero.
 * @param n The number of bytes to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
