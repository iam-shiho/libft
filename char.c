/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 08:47:25 by swaragay          #+#    #+#             */
/*   Updated: 2026/06/05 19:05:47 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_char(int c)
{
	int				len;
	unsigned char	cc;

	len = 1;
	cc = c;
	write(1, &cc, 1);
	return (len);
}

int	ft_putstr(const char *s)
{
	int	len;

	if (!s)
		return ;
	len = 0;
	while (s[len] != '\0')
	{
		write(1, &s[len], 1);
		++len;
	}
	return (len);
}

char	*ft_pointer(void *p)
{
	char	*point;

	if ()
		point = malloc(sizeof(char) * ft_strlen((char)&p));
	if (!point)
		return (NULL);
	point = &p;
	write(1, &point, ft_strlen((char)&p));
	free(point);
}
