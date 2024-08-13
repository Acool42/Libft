/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:36:04 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 15:03:15 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (!n)
		return (0);
	if (!ptr1 || !ptr2)
		return (ptr1 - ptr2);
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	cadena1[] = "hola";
// 	const char	cadena2[] = "holi";
// 	int			resultado;

// 	resultado = ft_memcmp(cadena1, cadena2, 4);
// 	if (resultado == 0)
// 	{
// 		printf("Las cadenas son iguales.\n");
// 	}
// 	else if (resultado < 0)
// 	{
// 		printf("La cadena 1 es menor que la cadena 2.\n");
// 	}
// 	else
// 	{
// 		printf("La cadena 1 es mayor que la cadena 2.\n");
// 	}
// 	return (0);
// }
