/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:46:18 by susamani          #+#    #+#             */
/*   Updated: 2024/05/16 11:48:22 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "cadena";
// 	char	c = 'd';	
// 	char	*result = ft_strchr(str, c);

// 	if (result != NULL)
// 	{
// 		printf("El carácter '%c' fue encontrado en la cadena: %s\n", c, result);
// 	}
// 	else
// 	{
// 		printf("El carácter '%c' no fue encontrado en la cadena. \n", c);
// 	}
// 	return (0);
// }
