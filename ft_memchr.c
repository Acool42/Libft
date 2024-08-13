/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:48:10 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 14:54:13 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*cadena = "Hola mundo";
// 	void		*resultado;

// 	resultado = ft_memchr(cadena, 'l', 10);
// 	if (resultado != NULL)
// 	{
// 		printf("Posición del carácter 'l': %td\n", (char *)resultado - cadena);
// 	}
// 	else
// 	{
// 		printf("El carácter 'l' no se encontró en la cadena.\n");
// 	}
// 	return (0);
// }
