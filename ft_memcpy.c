/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:19:20 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 14:41:24 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*csrc;
	char	*cdst;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	while (n > 0)
	{
		cdst[i] = csrc[i];
		i++;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Hola, mundo!";
// 	char	dst[20];

// 	ft_memcpy(dst, src, sizeof(src));
// 	printf("Copia: %s\n", dst);
// 	return (0);
// }
