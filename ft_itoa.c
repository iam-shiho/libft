/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:02:18 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/03 14:20:45 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
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

char	*ft_putnbr(int nb, char *dest)
{
	int	i;

	if (nb < 0)
	{
		i = 0;
		dest[i] = '-';
		nb *= -1;
	}
	i = ft_intlen(nb);
	dest[i] = '\0';
	i--;
	while (nb >= 10)
	{
		dest[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	dest[i] = (nb % 10) + '0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;

	dest = malloc(ft_intlen(n) + 1);
	if (!dest)
		return (NULL);
	if (n == -2147483648)
	{
		dest = "-2147483648";
		return (dest);
	}
	return (ft_putnbr(n, dest));
}

int	main(void)
{
	write(1, ft_itoa(-2147483648), ft_strlen(ft_itoa(-2147483648)) + 1);
	write(1, "\n", 1);
	write(1, ft_itoa(2147483647), ft_strlen(ft_itoa(2147483647)) + 1);
	write(1, "\n", 1);
	write(1, ft_itoa(0), ft_strlen(ft_itoa(0)) + 1);
	write(1, "\n", 1);
	printf("文字数は%zu", ft_intlen(0));
}
