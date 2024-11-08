/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:07:02 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/05 17:50:35 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a character is an ASCII character
 * @param c The character to check
 * @return 1 if the character is an ASCII character, 0 otherwise
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
