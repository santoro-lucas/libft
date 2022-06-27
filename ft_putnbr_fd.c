/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:09 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/27 02:20:49 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putdigit(int d, int fd)
{
	d = '0' + d;
	write(fd, &d, 1);
}

// Still needs to manage int min = -2147483648
void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar_fd('-', 1);
		n2 = n2 * -1;
	}
	if (n2 / 10 < 1)
		putdigit(n2 % 10, fd);
	else
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putnbr_fd(n2 % 10, fd);
	}
}
