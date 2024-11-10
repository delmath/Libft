/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:36:53 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 20:41:59 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

/**
 * @brief The ft_calloc() function allocates memory for an array of
 * nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer
 * value that can later be successfully passed to free().
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element.
 * @return The allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (0 == nmemb || 0 == size)
		return (NULL);
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
