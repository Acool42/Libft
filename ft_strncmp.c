/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:49:18 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 13:54:23 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hell";
// 	size_t	n = 8;

// 	int	result = ft_strncmp(str1, str2, n);
// 	if (result == 0)
// 	{
// 		printf("Las cadenas son iguales.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("La cadena s1 es menor que la cadena s2.\n");
// 	}
// 	else
// 	{
// 		printf("La cadena s1 es mayor que la cadena s2.\n");
// 	}
// 	return (0);
// }
