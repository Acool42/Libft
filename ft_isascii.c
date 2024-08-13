/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:27:48 by susamani          #+#    #+#             */
/*   Updated: 2024/07/27 12:02:24 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	char	test;

	printf("ingrese un caracter:");
	scanf("%c", &test);
	if (ft_isascii(test))
	{
		printf("El caracter ingresado es ascii. \n");
	}
	else
	{
		printf("El caracter ingresado no es ascii. \n");
	}
	return (0);
}
