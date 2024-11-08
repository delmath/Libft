/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:08:22 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/05 18:19:58 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memcmp() function compares the first n bytes
 * (each interpreted as unsigned char) of the memory areas s1 and s2.
 * @param s1 The first memory area to compare
 * @param s2 The second memory area to compare
 * @param n The number of bytes to compare
 * @return The  memcmp() function returns an integer less than,
 * equal to, or greater than zero if the first n bytes of s1 is found,
 * respectively, to be less than, to match, or be greater than the
 * first n bytes of s2.
 * 
 * For a nonzero return value, the sign is determined by the sign of
 * the difference between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2.
 * 
 * If n is zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
