/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:09:34 by susana            #+#    #+#             */
/*   Updated: 2024/05/14 18:20:07 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	num_elements;
// 	size_t	element_size;
// 	size_t	index;
// 	int		*arr;

// 	num_elements = 5;
// 	element_size = sizeof(int);
// 	arr = (int *)ft_calloc(num_elements, element_size);
// 	index = 0;
// 	if (arr == NULL)
// 	{
// 		printf("Error al asignar memoria.\n");
// 		return (1);
// 	}
// 	printf("Array de enteros:\n");
// 	while (index < num_elements)
// 	{
// 		printf("%d ", arr[index]);
// 		index++;
// 	}
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }
