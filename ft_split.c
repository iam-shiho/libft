/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:37:57 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/12 19:22:21 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	unsigned int	i;
	size_t			count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
		}
	}
	return (count);
}

size_t	ft_wordlen(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (len + 1);
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char			**dest;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	dest = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	//文字列をいれる配列の分確保した
	if (!dest)
		dest[i] = NULL;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c) //もじが一致しないばあい
		{
			dest[j] = ft_substr(s, i, ft_wordlen(s, c, i));
			j++;
			i += ft_wordlen(s, c, i);
		}
	}
	dest[j] = NULL;
	return (dest);
}

/*
区切る数を求める（+2はNULLと分けるとき区切る数＋１配列ができるから）
ft_substrで文字を区切り、配列を格納する。
*/

// int	main(void)
// {
// 	char	s[30] = "42aaaa42aaaaTokyoaaaa";
// 	char	c;
// 	char	**str;
// 	size_t	i;

// 	// size_t	j;
// 	i = 0;
// 	c = 'a';
// 	str = ft_split(s, c);
// 	// printf("%zu", ft_countword(s, c));
// 	// while (i < ft_countword(s, c))
// 	// {
// 	// 	printf("%s\n", str[i]);
// 	// 	i++;
// 	// }
// 	// while (i < ft_countword(s,c))
// 	// {
// 	// 	j = 0;
// 	// 	while (str[i][j])
// 	// 	{
// 	// 		write(1,&str[i][j],1);
// 	// 		++j;
// 	// 	}
// 	// 	write(1,"\n",1);
// 	// 	i++;
// 	// }
// 	while (i < ft_countword(s, c))
// 	{
// 		write(1, str[i], (strlen(str[i]) + 1));
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }
