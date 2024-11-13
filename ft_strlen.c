/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:26:46 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 23:28:34 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_strlen() function eeturns the
 * length of the string s.
 * @param s The string to measure
 * @return The length of the string
 */
size_t	ft_strlen(const char *s)
{
	char	*old;

	old = (char *)s;
	while (*s)
		s++;
	return (s - old);
}
