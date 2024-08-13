/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:54:30 by susamani          #+#    #+#             */
/*   Updated: 2024/05/16 13:20:59 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

// int	main(void)
// {
// 	char	test;

// 	printf("ingrese un caracter:");
// 	scanf("%c", &test);
// 	if (ft_isdigit(test))
// 	{
// 		printf("El caracter ingresado si es un dígito numérico. \n");
// 	}
// 	else
// 	{
// 		printf("El caracter ingresado no es un dígito numérico. \n");
// 	}
// 	return (0);
// }
