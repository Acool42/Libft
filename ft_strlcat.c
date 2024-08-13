/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:37 by susamani          #+#    #+#             */
/*   Updated: 2024/06/03 11:32:09 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
	{
		dst_len++;
	}
	while (src[src_len] && (dst_len + src_len + 1) < size)
	{
		dst[dst_len + src_len] = src[src_len];
		++src_len;
	}
	if (dst_len < size)
		dst[dst_len + src_len] = '\0';
	while (src[src_len])
	{
		++src_len;
	}
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst[30] = "Hola ";
// 	const char	*src = "Susanita!";
// 	size_t	size = sizeof(dst);

// 	printf("Initial dst: %s\n", dst);
// 	printf("src: %s\n", src);
// 	printf("Initial size: %zu\n", dstsize);
// 	size_t	result = ft_strlcat(dst, src, size);

// 	printf("Resulting string: %s\n", dst);
// 	printf("Length of resulting string: %zu\n", result);
// 	return (0);
// }
