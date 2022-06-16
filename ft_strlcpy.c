/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:50:00 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/14 22:55:46 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t counter;

	if (size == 0)
		return (ft_strlen(src));
	counter = 0;
	while (counter < size -1 && *(src + counter) != '\0')
	{
		*(dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + counter) = '\0';
	return (ft_strlen(src));
}
