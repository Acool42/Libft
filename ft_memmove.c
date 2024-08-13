/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susana <susana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:29:26 by susamani          #+#    #+#             */
/*   Updated: 2024/05/14 14:48:11 by susana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Suzie is learning.";
// 	char	dest[50];

// 	ft_memmove(dest, src, strlen(src) + 1);
// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }
