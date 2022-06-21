/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:50:00 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/21 00:46:06 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	total;
	
	total = ft_strlen(src);
	if (size == 0)
		return (total);
	while (size-- > 1 && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (total);
}
