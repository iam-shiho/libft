/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:02:18 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/18 13:46:59 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_putnbr(long n, char *dest, long len)
{
	dest[len] = '\0';
	if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		dest[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	nbr;
	long	len;

	nbr = n;
	len = ft_intlen(nbr);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	return (ft_putnbr(nbr, dest, len));
}

// int	main(void)
// {
// 	write(1, ft_itoa(-2147483648), ft_strlen(ft_itoa(-2147483648)) + 1);
// 	write(1, "\n", 1);
// 	write(1, ft_itoa(2147483647), ft_strlen(ft_itoa(2147483647)) + 1);
// 	write(1, "\n", 1);
// 	write(1, ft_itoa(0), ft_strlen(ft_itoa(0)) + 1);
// 	write(1, "\n", 1);
// 	printf("文字数は%zu", ft_intlen(0));
// }
