/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:29:18 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 12:36:16 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_ocurrence;

	last_ocurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
		{
			last_ocurrence = str;
		}
		str++;
	}
	if (*str == (unsigned char)c)
	{
		return ((char *)str);
	}
	return ((char *)last_ocurrence);
}

// int	main(void)
// {
// 	const char	*str = "Hello world!";
// 	int	c = 'o';

// 	char	*result = ft_strrchr(str, c);
// 	if (result != NULL)
// 	{
// 		printf("El último '%c' en \"%s\" está en la posición %ld. \n",
// 			c, str, result - str);
// 	}
// 	else
// 	{
// 		printf("'%c' no fue encontrado en \"%s\".\n", c, str);
// 	}
// 	return (0);
// }
