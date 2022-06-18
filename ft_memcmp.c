/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:16:14 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/18 05:26:36 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char value;

	if (n == 0)
		return (0);
	while (n > 1 && *(unsigned char *) s1 == *(unsigned char *) s2)
	{
		n--;
		s1++;
		s2++;
	}
	value = *(unsigned char *) s1 - *(unsigned char *) s2;
	return ((int) value);
}
