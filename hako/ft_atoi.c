/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:37:54 by swaragay          #+#    #+#             */
/*   Updated: 2026/04/30 21:15:56 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		sign;
	long	total;

	total = 0;
	sign = 1;
	if (*str == '-')
	{
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

int	main(void)
{
	char	num[] = "+--1234b567";
	char	num1[] = "-2147483648";
	char	num2[] = "+2147483647";

	printf("%d\n", atoi(num));
	printf("%d\n", ft_atoi(num));

	printf("%d\n", atoi(num1));
	printf("%d\n", ft_atoi(num1));

	printf("%d\n", atoi(num2));
	printf("%d\n", ft_atoi(num2));
}

//-2147483648
//2147483647
