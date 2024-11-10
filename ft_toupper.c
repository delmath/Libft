/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:14 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 20:37:52 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_toupper() function converts a lowercase letter to uppercase,
 * if possible owtherwise returns c
 * @param c The character to convert
 * @return The uppercase letter
 */
int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - SPACE_LOWER_UPPER);
	return (c);
}
