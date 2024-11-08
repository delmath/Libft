/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:51:42 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 13:52:27 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isalpha() function tests for any character for
 * which isalpha is true.
 * @param c The character to test.
 * @return 1 if c is an alphabetic character, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
