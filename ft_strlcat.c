/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:49:57 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/17 17:15:16 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t counter;
	size_t total;
	
	total = ft_strlen(dst) + ft_strlen(src);

	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	counter = 0;
	while (*dst != '\0')
		dst++;
	while ((*src != '\0') && counter < (size - 1))
	{
		*dst++ = *src++;
		counter++;
	}	
	*dst = '\0';
	return (total);
}
