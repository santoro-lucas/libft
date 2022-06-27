/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:59:11 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/27 18:26:51 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char*	set_array(int n)
{
	unsigned int	figures;
	char			*numstr;	

	figures = 0;
	if (n <= 0)
		figures++;
	while (n)
	{
		n /= 10;
		figures++;
	}
	numstr = malloc(figures + 1);
	ft_memset(numstr, '0', figures);
	ft_bzero(numstr + figures, 1);
	return (numstr);
}

char	*ft_itoa(int n)
{
	// int		m;
	char	*numstr;

	numstr = set_array(n);
	// m = n;
	// if (n == 0)
	// 	return (numstr);
	// if (n < 0)
	// 	n = -n;
	// numstr = numstr + ft_strlen(numstr);
	// while (n/10 > 0)
	// {
	// 	*numstr = '0' + (n % 10);
	// 	n /= 10;
	// 	numstr--;
	// }
	// if (m < 0)
	// 	*numstr = '-';
	return (numstr);
}
