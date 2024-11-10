/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:29 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 20:57:10 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/**
 * @brief The ft_memmove() function copies n bytes from memory area
 * src to memory area dest. The memory areas may overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	uint8_t	*dest_p;
	uint8_t	*src_p;

	dest_p = (uint8_t *)dest;
	src_p = (uint8_t *)src;
	i = 0;
	if (NULL == dest && NULL == src && n > 0)
		return (0);
	if (src_p < dest_p)
		while (n--)
			dest_p[n] = src_p[n];
	else
	{
		while (i < n)
		{
			*(dest_p++) = *(src_p++);
			i++;
		}
	}
	return (dest);
}
