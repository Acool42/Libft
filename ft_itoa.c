/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:37:46 by susamani          #+#    #+#             */
/*   Updated: 2024/05/31 12:20:09 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*numb;
	const char	*digits;

	len = ft_nlen(n);
	digits = "0123456789";
	numb = (char *)malloc(sizeof(char) * (len + 1));
	if (!numb)
		return (NULL);
	numb[len] = '\0';
	if (n == 0)
		numb[0] = '0';
	if (n < 0)
		numb[0] = '-';
	while (n)
	{
		if (n > 0)
			numb[--len] = digits[n % 10];
		else
			numb[--len] = digits[(n % 10) * -1];
		n /= 10;
	}
	return (numb);
}

// int	main(void)
// {
// 	int		number = -1234;
// 	char	*result = ft_itoa(number);

// 	if (result)
// 	{
// 		printf("El número %d convertido a cadena es: %s\n", number, result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error: No se pudo convertir el número %d\n", number);
// 	}
// 	return (0);
// }
