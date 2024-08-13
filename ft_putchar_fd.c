/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:25:51 by susamani          #+#    #+#             */
/*   Updated: 2024/06/03 12:27:49 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	fd;
// 	char	character = 'A';

// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error al abrir el archivo");
// 		return (1);
// 	}
// 	ft_putchar_fd(character, fd);
// 	if (close(fd) == -1)
// 	{
// 		perror("Error al cerrar el archivo");
// 		return (1);
// 	}
// 	return (0);
// }
