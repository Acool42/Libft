/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:47:20 by susamani          #+#    #+#             */
/*   Updated: 2024/06/08 08:54:38 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	int		value;
// 	t_list	*node;

// 	value = 10;
// 	node = ft_lstnew(&value);
// 	if (node == NULL)
// 	{
// 		printf("Error al crear el nodo.\n");
// 		return (1);
// 	}
// 	printf("Contenido del nodo: %d\n", *(int *)node->content);
// 	free(node);
// 	return (0);
// }
