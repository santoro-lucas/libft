/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:38:51 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/23 23:59:51 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	offset;

	offset = 0;
	while (len-- && *big != '\0' && *(little + offset) != '\0')
	{
		if (*big == *(little + offset))
			offset++;
		else
			offset = 0;
		big++;
	}
	if (offset < ft_strlen(little) /*|| *(little + offset) == '\0'*/)
		return (NULL);
	else
		return ((char *) (big - (offset)));
}
