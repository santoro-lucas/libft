/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:49:57 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/25 00:43:14 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	total;
	
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	total = dst_size + src_size;

//	while (size-- > 1)
	if (size <= dst_size)
		return (src_size + size);
	dst += dst_size;
	size -= dst_size;
	while ( size-- > 1 && *src != '\0')
		*dst++ = *src++;
	//strlcpy(dst, src, )
	*dst = '\0';
	return (total);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	total;

// 	if (size < ft_strlen(dst))
// 		return(ft_strlen(src) + size);
// 	total = ft_strlen(src) + ft_strlen(dst);
// 	dst += ft_strlen(dst);
// 	while (size-- > 1)
// 	{
// 		if (*src == '\0')
// 			break;
// 		else
// 			*dst++ = *src++;
// 	}
// 	*dst = '\0';
// 	return(total);
// }

//size_t	ft_strlcat(char *dst, const char *src, size_t size)
//{
//	size_t dst_size;
//	size_t total;
//	
//	dst_size = ft_strlen(dst);
//	total = dst_size + ft_strlen(src);
//		
//	dst += dst_size;
//	size -= dst_size;
//	ft_strlcpy (dst, src, size);
//	return (total);
//}
