/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:30:59 by susana            #+#    #+#             */
/*   Updated: 2024/06/03 11:44:00 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[20];
// 	size_t	len;

// 	len = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Resultado de ft_strlcpy: %s\n", dst);
// 	printf("Longitud de la cadena copiada: %zu\n", len);
// 	printf("Longitud real de la cadena de origen: %zu\n", strlen(src));
// 	return (0);
// }
