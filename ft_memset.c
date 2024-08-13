/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:17:20 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 14:40:12 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	if (s == NULL)
	{
		return (NULL);
	}
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	str[50];

// 	strncpy(str, "Mi hijo es maravilloso", sizeof(str) - 1);
// 	ft_memset (str + 5, '*', 3);
// 	printf("Función propia: %s\n", str);
// 	return (0);
// }
