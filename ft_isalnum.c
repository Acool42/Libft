/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:56:34 by susamani          #+#    #+#             */
/*   Updated: 2024/05/16 14:58:16 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= '0' && c <= '9')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')));
}

// int	main(void)
// {
// 	char	test;

// 	printf("ingrese un caracter:");
// 	scanf("%c", &test);
// 	if (ft_isalnum(test))
// 	{
// 		printf("El caracter ingresado si es alfanumérico. \n");
// 	}
// 	else
// 	{
// 		printf("El caracter ingresado no es alfanumérico. \n");
// 	}
// 	return (0);
// }
