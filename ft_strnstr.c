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

// char *find_it()
// {

// }

// char *check_it()
// {
// 	while (*(big + buff) == *(little + buff))
// 		if (*(little + buff) == '\0')
// 			buff = 0;
// 			return (big);
// 		buff++;
// }

// char	*ft_strnstr(const char	*big, const char *little, size_t len)
// {
// 	while(*big != *little)
// 	{
// 		big++;
// 		if (*big == '\0')
// 			return (NULL);
// 	}
// 	while (*(big + buff) == *(little + buff))
// 	{
// 		if (*(little + buff) == '\0')
// 			return (big);
// 		if (*(big + buff) !)
// 		buff++;
// 	}
// }

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	buff;

	buff = 0;
	while (len-- >= 0)
	{
		if (*big == *(little + buff))
			buff++;
		else if (*big != *(little + buff))
			buff=0;
		if (*(little + buff) == '\0')
			return ((char *) (big - (buff - 1)));
		if (*big == '\0')
			break;
		big++;
	}
	return (NULL);
}
