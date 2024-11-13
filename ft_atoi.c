/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:51:45 by madelvin          #+#    #+#             */
/*   Updated: 2024/11/13 03:01:47 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <errno.h>
#include <limits.h>

/**
 * @brief The  ft_atoi() function converts
 * the initial portion of the string pointed to by nptr to int.
 * @param str The string to convert to int.
 * @return The converted int value.
 */
int	ft_atoi(const char *str)
{
	int		sign;
	size_t	i;
	size_t	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isdigit(str[i]))
	{
		if (result > (unsigned long)((LLONG_MAX / 10) - (str[i] - '0')))
		{
			errno = ERANGE;
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)result * sign);
}
