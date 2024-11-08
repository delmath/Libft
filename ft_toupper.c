/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:14 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/05 17:50:46 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase letter to uppercase,
 * if possible owtherwise returns c
 * @param c The character to convert
 * @return The uppercase letter
 */
int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	else
		return (c);
}
