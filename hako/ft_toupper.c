/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:04:37 by swaragay          #+#    #+#             */
/*   Updated: 2026/04/30 21:23:33 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_toupper(int c)
{
	if (!(c >= 97 && c <= 122))
		return (c);
	return (c-32);
}

int	main(void)
{
	int	c[6] = {'A', 'a', '2', 1, ' ', ','};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("関数再現: %d 関数: %d\n", ft_toupper(c[i]), toupper(c[i]));
		i++;
	}
}
