/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:51:53 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/11 11:49:46 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*deta;

	deta = malloc(sizeof(t_list) * 1); //2つ項目あるのに一つでいいの？
	if (!deta)
		return (NULL);
	deta->content = content;
	deta->next = NULL;
	return (deta);
}

// t_list[0].content
// t_list[0].next

// int	main(void)
// {
// 	char	*str_data;
// 	t_list	*node_str;
// 	int		num_data;
// 	t_list	*node_int;
// 	t_list	*node_null;

// 	str_data = "42 Tokyo";
// 	node_str = ft_lstnew(str_data);
// 	if (node_str)
// 	{
// 		printf("[テスト1: 文字列]\n");
// 		// void* から char* にキャストして出力
// 		printf("content: %s\n", (char *)node_str->content);
// 		printf("next   : %p\n\n", (void *)node_str->next);
// 	}
// 	// ----------------------------------------------------
// 	// テスト2: 整数（int）の住所を格納する
// 	// ----------------------------------------------------
// 	num_data = 2026;
// 	// &num_data で「整数の住所」を content に渡す
// 	node_int = ft_lstnew(&num_data);
// 	if (node_int)
// 	{
// 		printf("[テスト2: 整数]\n");
// 		// void* から int* にキャストし、さらに * をつけて中身を取り出す
// 		printf("content: %d\n", *(int *)node_int->content);
// 		printf("next   : %p\n\n", (void *)node_int->next);
// 	}
// 	// ----------------------------------------------------
// 	// テスト3: NULL（空っぽ）を格納する
// 	// ----------------------------------------------------
// 	node_null = ft_lstnew(NULL);
// 	if (node_null)
// 	{
// 		printf("[テスト3: NULLデータ]\n");
// 		printf("content: %p (NULLのはず)\n", node_null->content);
// 		printf("next   : %p (NULLのはず)\n\n", (void *)node_null->next);
// 	}
// 	free(node_str);
// 	free(node_int);
// 	free(node_null);
// 	return (0);
// }
