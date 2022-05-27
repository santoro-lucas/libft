/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:37:57 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/27 22:47:36 by lusantor         ###   ########.fr       */
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

#include <stdio.h>
void	print_array(int *dest)
{
	int	i;

	i = 0;
	while (i < 5)
		printf("%i ", dest[i++]);
	printf("\n");
}

int	main(void)
{
	int	dest[5] = {0,0,0,0,0};
	int	src[5] = {2147483647,2,3,4,5};

	print_array(dest);
	ft_memcpy(dest, src, 55);
	print_array(dest);
	return (0);
}
