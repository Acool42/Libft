/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:35:15 by susamani          #+#    #+#             */
/*   Updated: 2024/06/08 08:54:49 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	size = 0;
	temp = lst;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

// int	main(void)
// {
// 	int		value1 = 1;
// 	int		value2 = 2;
// 	int		value3 = 3;
// 	t_list	*node1 = ft_lstnew(&value1);
// 	t_list	*node2 = ft_lstnew(&value2);
// 	t_list	*node3 = ft_lstnew(&value3);
// 	t_list	*head = NULL;

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	size_t	size = ft_lstsize(head);
// 	printf("Tamaño de la lista: %zu\n", size);
// 	return (0);
// }
