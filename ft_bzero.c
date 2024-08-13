/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:34:35 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 15:07:18 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// int	main(void)
// {
// 	char	buffer[10];

// 	strncpy(buffer, "Susanita", sizeof(buffer) - 1);
// 	printf("Antes de bzero: %s\n", buffer);
// 	ft_bzero(buffer, 5);
// 	printf("Después de bzero: %s\n", buffer);
// 	return (0);
// }
