/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:37:57 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/14 00:12:35 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		*((char *) dest++) = *((char *) src++);
	dest -= n;
	return (dest);
}

// int	main(void)
// {
// 	char string1[13] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
// 	// char string2[13] = {'0', '1', '2', '3', '4', '5', '\0'};
// 	ft_putendl_fd(string1, 1);
// 	// ft_putendl_fd(string2, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_memcpy(string1 + 2, string1, 4);
// 	ft_putendl_fd(string1, 1);
// 	// ft_putendl_fd(string2, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
