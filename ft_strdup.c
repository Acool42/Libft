/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:22:41 by susana            #+#    #+#             */
/*   Updated: 2024/05/16 13:24:48 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)ft_calloc(len, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}

// int	main(void)
// {
// 	const char	*original = "Hola, mundo!";
// 	char		*duplicado;

// 	duplicado = ft_strdup(original);
// 	if (duplicado != NULL)
// 	{
// 		printf("Cadena original: %s\n", original);
// 		printf("Cadena duplicada: %s\n", duplicado);
// 		free(duplicado);
// 	}
// 	else
// 	{
// 		printf("Error: No se pudo duplicar la cadena.\n");
// 	}
// 	return (0);
// }
