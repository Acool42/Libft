/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:09:04 by susamani          #+#    #+#             */
/*   Updated: 2024/05/16 14:34:42 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char	test;

// 	printf("ingrese un caracter:");
// 	scanf("%c", &test);
// 	if (ft_isprint(test))
// 	{
// 		printf("El caracter ingresado es imprimible. \n");
// 	}
// 	else
// 	{
// 		printf("El caracter ingresado no es imprimible. \n");
// 	}
// 	return (0);
// }
