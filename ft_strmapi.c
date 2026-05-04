/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:41:42 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/04 15:25:53 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_dest;
	size_t			s_len;
	unsigned int	i;

	i = 0;
	s_len = ft_strlen(s);
	f_dest = malloc(s_len + 1);
	while (s[i] != '\0')
	{
		f_dest[i] = f(i, s[i]);
		i++;
	}
	return (ft_strdup(f_dest));
}

// char	ft_toupp(unsigned int i, char s)
// {
// 	(void)i;
// 	if (!(s >= 97 && s <= 122))
// 		return (s);
// 	return (s - 32);
// }

// int	main(void)
// {
// 	char	s[10] = "abcdefG";

// 	write(1, ft_strmapi(s, ft_toupp), ft_strlen(s) + 1);
// 	write(1, "\n", 1);
// }
