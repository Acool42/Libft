/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:07:03 by susamani          #+#    #+#             */
/*   Updated: 2024/06/01 18:24:51 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}

void	to_uppercase(unsigned int index, char *c)
{
	(void)index;
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hola, Mundo!";

// 	ft_striteri(str, to_uppercase);
// 	printf("Cadena resultante: %s\n", str);
// 	return (0);
// }
