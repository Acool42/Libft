/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:09 by susamani          #+#    #+#             */
/*   Updated: 2024/06/18 12:19:38 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*newstr;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1, len_s1);
	ft_memcpy(newstr + len_s1, s2, len_s2);
	newstr[len_s1 + len_s2] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char	*s1 = "Hola";
// 	char	*s2 = "Mundo";
// 	char	*result = ft_strjoin(s1, s2);

// 	if (result == NULL)
// 	{
// 		printf("Error al concatenar las cadenas\n");
// 	}
// 	else
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
