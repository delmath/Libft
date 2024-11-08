/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:34:01 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/06 10:53:12 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The strchr() function returns a pointer to the first
 * occurrence of the character c in the string s.
 * @param s The string to search
 * @param c The character to search for
 * @return The functions return a pointer to the matched
 * character or NULL if the character is not found.
 * The terminating null byte is considered part of the string,
 * so that if c is specified as '\0',
 * these functions return a pointer to the terminator.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
