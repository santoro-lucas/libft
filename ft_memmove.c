/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:17:10 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/14 00:14:11 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	dest += n - 1;
	src += n - 1;
	while (n-- > 0)
		*((char *) dest--) = *((char *) src--);
	dest -= n;
	return (dest);
}

// int	main(void)
// {
// 	char string1[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};
// 	// char string2[13] = {'0', '1', '2', '3', '4', '5', '\0'};
// 	ft_putendl_fd(string1, 1);
// 	// ft_putendl_fd(string2, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_memmove(string1 + 3, string1, 6);
// 	ft_putendl_fd(string1, 1);
// 	// ft_putendl_fd(string2, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
