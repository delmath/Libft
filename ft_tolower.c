/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:26:57 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/05 17:50:45 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a uppercase letter to lowercase,
 * if possible owtherwise returns c
 * @param c The character to convert
 * @return The lowercase letter
 */
int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	else
		return (c);
}
