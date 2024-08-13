/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:27:56 by susamani          #+#    #+#             */
/*   Updated: 2024/05/16 15:37:26 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*ptr;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	s += start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, len);
	ptr[len] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char			input[] = "Ejemplo*de*cadena*para probar la función";
// 	unsigned int	start = 2;
//     size_t			len = 6;
// 	char			*result = ft_substr(input, start, len);

// 	printf("Cadena original: %s\n", input);
// 	printf("Comenzar desde el índice: %u\n", start);
// 	printf("Tomar %zu caracteres\n", len);
// 	if (result != NULL)
// 	{
// 		printf("Subcadena resultante: %s\n", result);
// 		free(result);
//     }
// 	else
// 	{
// 		printf("Error: No se pudo obtener la subcadena\n");
// 	}
// 	return (0);
// }
