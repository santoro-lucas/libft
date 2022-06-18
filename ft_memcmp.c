/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:16:14 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/18 22:25:17 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	// char value;

	if (n == 0)
		return (0);
	while (--n && *(unsigned char *) s1 == *(unsigned char *) s2)
	{
		s1++;
		s2++;
	}
	// Method 1: return difference 
	// DOESNT WORK WITH ZEROES AND NUMBER IN THE RANGE OF UNSIGNED CHAR
	// value = *(unsigned char *) s1 - *(unsigned char *) s2;
	// return ((int)value);
	// Method 2: conditional return - WORKS JUST FINE
	if ( *(unsigned char *) s1 > *(unsigned char *) s2)
		return (1);
	else if ( *(unsigned char *) s1 < *(unsigned char *) s2)
		return (-1);
	else
		return (0);
}
