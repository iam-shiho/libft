/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:11:50 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/04 19:19:48 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	unsigned int i;

	if (!s)
		return ;
	i = 0;
	while(s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	c[20] = "abcdefghijk";

// 	ft_putstr_fd(c, 1);
// }
