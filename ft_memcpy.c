/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:37:57 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/27 23:25:25 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dest, const void *restrict src, int n) // int n should be typed size_t
{
	int i;

	i = 0;	
	while(i++ < n)
		*((char*) dest++) = *((char*) src++);
	dest -= n;
	return (dest);
}
