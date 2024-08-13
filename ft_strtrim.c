/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:26:48 by susamani          #+#    #+#             */
/*   Updated: 2024/05/17 12:40:30 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	if (start == end)
		return (ft_strdup(""));
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], (end - start + 1));
	ptr[end - start] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char const	*s1 = "   Hola, mundo!   ";
// 	char const	*set = " ";
// 	char		*trimmed;

// 	trimmed = ft_strtrim(s1, set);
// 	if (trimmed)
// 	{
// 		printf("Cadena original: \"%s\"\n", s1);
// 		printf("Cadena después de trim: \"%s\"\n", trimmed);
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("No se pudo reservar memoria.\n");
// 	}
// 	return (0);
// }
