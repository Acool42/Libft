/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:54:17 by susana            #+#    #+#             */
/*   Updated: 2024/06/09 15:39:27 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_map;
	t_list	*new_node;
	void	*map_content;

	if (!lst || !f || !del)
		return (NULL);
	list_map = NULL;
	while (lst)
	{
		map_content = f(lst->content);
		new_node = ft_lstnew(map_content);
		if (!new_node)
		{
			if (map_content)
				del(map_content);
			ft_lstclear(&list_map, del);
			return (NULL);
		}
		ft_lstadd_back(&list_map, new_node);
		lst = lst->next;
	}
	return (list_map);
}

// void	*duplicate(void *content)
// {
// 	char	*str = (char *)content;
// 	char	*new_str = (char *)malloc(strlen(str) + 1);
// 	if (new_str == NULL) // Verifica si malloc devolvió NULL
// 		return (NULL);
// 	strcpy(new_str, str);
// 	return (new_str);
// }

// void	del(void *content)
// {
// 	if (content)
// 		free((char *)content);
// }

// int	main()
// {
// 	t_list	*original = NULL;
// 	original = ft_lstnew("Hola");
// 	original->next = ft_lstnew("Mundo");
// 	original->next->next = ft_lstnew("FT");
// 	t_list	*mapped = ft_lstmap(original, duplicate, del);
// 	while (mapped)
// 	{
// 		printf("%s\n", (char *)mapped->content);
// 		mapped = mapped->next;
// 	}
// 	ft_lstclear(&mapped, del);
// 	ft_lstclear(&original, NULL);
// 	return (0);
// }
