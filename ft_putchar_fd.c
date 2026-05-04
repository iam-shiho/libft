/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:32:55 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/04 19:19:37 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	ft_putchar_fd(c, 1);
// }
