/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:55:27 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 16:10:01 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The  ft_memchr() function scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c. Both c and the bytes of the
 * memory area pointed to by s are interpreted as uint8_t.
 * @param s The memory area to be scanned
 * @param c The character to be searched
 * @param n The number of bytes to be scanned
 * @return The memchr() and functions return a pointer to the matching byte or
 * NULL if the character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((uint8_t *)s)[i] == (uint8_t)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
