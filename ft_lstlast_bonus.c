/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 07:58:51 by susana            #+#    #+#             */
/*   Updated: 2024/06/09 13:31:43 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if (lst == NULL)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("1");
// 	t_list	*last_node = ft_lstlast(lst);

// 	lst->next = ft_lstnew("2");
// 	lst->next->next = ft_lstnew("3");
// 	lst->next->next->next = ft_lstnew("4");
// 	lst->next->next->next->next = ft_lstnew("5");
// 	if (last_node != NULL)
// 		printf("El último nodo es: %s\n", (char *)last_node->content);
// 	else
// 		printf("La lista está vacía\n");
// 	return (0);
// }
