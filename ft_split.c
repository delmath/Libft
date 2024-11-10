/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:23:34 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/10 15:16:10 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free_all(char **dst);
static size_t	ft_count_words(char const *s, char c);
static size_t	ft_split_word(char **dst, char c, const char *s);

/**
 * @brief The ft_split() function allocates (with malloc(3)) and returns
 * an array of strings obtained by splitting ’s’ using the character ’c’
 * as a delimiter. The array must be
 * ended by a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**dst;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	dst = malloc((word_count + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	if (ft_split_word(dst, c, s))
		return (ft_free_all(dst));
	return (dst);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_c;
	int		start;

	word_c = 0;
	start = 0;
	while (*s)
	{
		if (*s == c && start)
			start = 0;
		else if (*s != c && !start)
		{
			start = 1;
			word_c++;
		}
		s++;
	}
	return (word_c);
}

static int	ft_make_word(char **dst, char const *s, size_t size, size_t i)
{
	dst[i] = ft_substr(s, 0, size);
	if (!dst[i])
		return (-1);
	return (0);
}

static char	**ft_free_all(char **dst)
{
	size_t	i;

	i = -1;
	while (dst[++i])
		free(dst[i]);
	free(dst);
	return (NULL);
}

static size_t	ft_split_word(char **dst, char c, const char *s)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] != c && (end == 0 || s[end - 1] == c))
			start = end;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == '\0'))
		{
			if (ft_make_word(dst, s + start, end - start + 1, i) == -1)
				return (1);
			i++;
		}
		end++;
	}
	dst[i] = 0;
	return (0);
}
