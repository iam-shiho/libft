/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:37:54 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/21 14:33:54 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	total;

	total = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		total = total * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(total * sign));
}

// int	main(void)
// {
// 	char	num[] = "+--1234b567";
// 	char	num1[] = "-2147483648";
// 	char	num2[] = "+2147483647";

// 	printf("%d\n", atoi(num));
// 	printf("%d\n", ft_atoi(num));
// 	printf("%d\n", atoi(num1));
// 	printf("%d\n", ft_atoi(num1));
// 	printf("%d\n", atoi(num2));
// 	printf("%d\n", ft_atoi(num2));
// }
