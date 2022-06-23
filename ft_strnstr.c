/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:38:51 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/23 23:52:37 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/cdefs.h>

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
	if (buff < ft_strlen(little) /*|| *(little + buff) == '\0'*/)
		return (NULL);
	else
		return ((char *) (big - (buff)));
}
