/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:31:31 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 13:51:44 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte c.
 * @param s Pointer to the memory area to be filled.
 * @param c Value to be set.
 * @param n Number of bytes to be set to the value.
 * @return Pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*(p++) = (unsigned char)c;
	return (s);
}
