/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:27:54 by susamani          #+#    #+#             */
/*   Updated: 2024/06/03 11:29:33 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	const char	*ptr = s;

	while (*ptr != '\0')
	{
		++ptr;
	}
	return ((ptr - s));
}

// int	main(void)
// {
// 	size_t		length;
// 	const char	*s;

// 	s = "susanasamaniego";
// 	length = ft_strlen(s);
// 	printf("La longitud de la cadena es: %zu\n", length);
// 	return (0);
// }
