/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:38:51 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/23 04:30:26 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	buff;

	buff = 0;
	while (len-- && *big != '\0' && *(little + buff) != '\0')
	{
		if (*big == *(little + buff))
			buff++;
		else
			buff=0;
		big++;
	}
	if (buff == ft_strlen(little))
		return ((char *) (big - (buff)));
	else
		return (NULL);
}
