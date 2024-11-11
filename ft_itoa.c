/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:29:03 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/11 18:29:15 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_get_num_size(int n);

/**
 * @brief The ft_itoa() function allocates and returns a string
 * representing the integer received as an argument. Negative
 * numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*str;

	size = ft_get_num_size(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = ft_calloc((size + 1), sizeof(char));
	if (NULL == str)
		return (NULL);
	while (size-- > 0)
	{
		str[size] = n % 10 * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

static int	ft_get_num_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}
