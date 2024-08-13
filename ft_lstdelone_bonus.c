/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:04:20 by susana            #+#    #+#             */
/*   Updated: 2024/06/09 13:10:19 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	ft_free(void *content)
// {
// 	free(content);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*node1 = ft_lstnew(strdup("Node 1"));
// 	t_list	*node2 = ft_lstnew(strdup("Node 2"));
// 	t_list	*node3 = ft_lstnew(strdup("Node 3"));

// 	if (!node1 || !node2 || !node3)
// 	{
// 		printf("Error de asignación de memoria\n");
// 		if (node1) ft_lstdelone(node1, ft_free);
// 		if (node2) ft_lstdelone(node2, ft_free);
// 		if (node3) ft_lstdelone(node3, ft_free);
// 		return (1);
// 	}
// 	head = node1;
// 	head->next = node2;
// 	node2->next = node3;
// 	printf("Lista antes de limpiar:\n");
// 	print_list(head);
// 	if (node1 && node1->next == node2)
// 		node1->next = node2->next;
// 	ft_lstdelone(node2, ft_free);
// 	printf("Lista después de eliminar el segundo nodo:\n");
// 	print_list(head);
// 	ft_lstdelone(node1, ft_free);
// 	ft_lstdelone(node3, ft_free);
// 	return (0);
// }
