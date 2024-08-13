/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:46:58 by susamani          #+#    #+#             */
/*   Updated: 2024/06/03 11:52:29 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len
			&& little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*cadena_principal = "Esta es una cadena de ejemplo";
// 	const char	*subcadena = "cadena";
// 	size_t		limite;
// 	char		*resultado;

// 	limite = 20;
// 	resultado = ft_strnstr(cadena_principal, subcadena, limite);
// 	if (resultado != NULL)
// 	{
// 		printf("La subcadena '%s' fue encontrada en '%s'.\n", subcadena,
// 			cadena_principal);
// 		printf("La subcadena comienza en la posición %ld.\n", resultado
// 			- cadena_principal);
// 	}
// 	else
// 	{
// 		printf("La subcadena '%s' no fue encontrada en '%s'\n", subcadena,
// 			cadena_principal);
// 	}
// 	return (0);
// }
