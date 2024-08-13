/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:41:49 by susamani          #+#    #+#             */
/*   Updated: 2024/06/01 17:04:42 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	to_uppercase(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*str = "Hola, Mundo!";
// 	char	*result = ft_strmapi(str, &to_uppercase);

// 	if (result)
// 	{
// 		printf("Cadena resultante: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error: No se pudo aplicar la función a la cadena\n");
// 	}
// 	return (0);
// }
