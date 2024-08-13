/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:23:14 by susamani          #+#    #+#             */
/*   Updated: 2024/06/08 08:54:13 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
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
// 	while (head)
// 	{
// 		printf("Contenido del nodo: %d\n", *(int *)head->content);
// 		head = head->next;
// 	}
// 	while (head)
// 	{
// 		t_list	*temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return (0);
// }
