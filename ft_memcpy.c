/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:31:57 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 15:21:22 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief the ft_memcpy() fucntion copies n bytes from memory area src
 * to memory area dest. The memory areas must not overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * 			- If n is zero, the function does nothing.
 * @return A pointer to the destination memory area.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	uint8_t	*dest_p;
	uint8_t	*src_p;

	dest_p = (uint8_t *)dest;
	src_p = (uint8_t *)src;
	i = 0;
	if (!dest && !src && n > 0)
		return (0);
	while (i < n)
	{
		*(dest_p++) = *(src_p++);
		i++;
	}
	return (dest);
}
