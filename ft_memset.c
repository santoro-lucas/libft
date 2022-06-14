/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:22:45 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/10 21:32:26 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{

	size_t i;
	
	i = 0;
	while (i < n)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
		i++;
	}
	s -= n;
	return (s);
}
