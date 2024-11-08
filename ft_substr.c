/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:35:41 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:50 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_substr() function allocates (with malloc(3)) and returns
 * a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	size_t		s_l;

	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_strdup(""));
	if (len > s_l - start)
		len = s_l - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst || !s)
		return (NULL);
	ft_memcpy((void *)dst, (void *)(s + start), len + 1);
	dst[len] = 0;
	return (dst);
}
