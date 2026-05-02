/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:02:18 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/02 22:15:09 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
{
	size_t len;
	char *dest;
	len = ft_strlen((char)n);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
}

int	ft_atoi(char *str)
{
	int		sign;
	long	total;

	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		total = total * 10 + (*str - '0');
		str++;
	}
	return ((int)(total * sign));
}
