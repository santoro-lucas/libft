/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:13:39 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/18 04:58:00 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	while (*(unsigned char *) s != (unsigned char) c && n-- > 0)
		s++;
	if (*(unsigned char *) s == (unsigned char) c)
		return ((void *) s);
	else
		return (NULL);
}
