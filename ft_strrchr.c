/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:41:31 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:59 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_strrchr() function returns a pointer to the last occurrence of
 * the character c in the string s.
 * @param s The string to search
 * @param c The character to search for
 * @return The functions return a pointer to the matched character or NULL
 * if the character is not found. The terminating null byte is considered
 * part of the string, so that if c is specified as '\0', these functions
 * return a pointer to the terminator.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}
