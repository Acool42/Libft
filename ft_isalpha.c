/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:06:19 by susamani          #+#    #+#             */
/*   Updated: 2024/06/04 10:08:46 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	char	test;

// 	printf("ingrese un caracter:");
// 	scanf("%c", &test);
// 	if (ft_isalpha(test))
// 	{
// 		printf("El caracter ingresado si es alfabético. \n");
// 	}
// 	else
// 	{
// 		printf("El caracter ingresado no es alfabético. \n");
// 	}
// 	return (0);
// }
