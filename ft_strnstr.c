/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:38:51 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/14 23:05:59 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	buff;

	buff = 0;
	while (len--)
	{
		if (*big == *(little + buff))
			buff++;
		else if (*big != *(little + buff))
			buff=0;
		big++;
		if (*(little + buff) == '\0')
			return ((char *) (big - (buff)));
		if (*big == '\0')
			break;
	}
	return (NULL);
}
