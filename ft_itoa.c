/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:59:11 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/11 00:14:59 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// Atençao: o estado atual dessa função é meramente uma cópia do algoritmo
// originalmente usado para a ft_putnbr da piscina
// como inspiração para o desenvolvimento dela
// Nem o protótipo e nem a função estão de acordo com o solicitado. 
// Corrigir isso assim que for trabalhar na função

int	count_chars(int n)
{
	unsigned int	figures;

	figures = 0;
	if (n < 0)
	{
		n *= -1;
		figures++;
	}
	while (n > 0)
	{
		n /= 10;
		figures++;
	}
	return (figures);
}

// Code highly reused from ft_putnbr
// Remember to check
void	ft_putnbr(int n)
{
	char *numstr;

	numstr = malloc((count_chars(n) * sizeof(char)) + 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n / 10 < 1)
		d = '0' + d;
		write(&d, 1);
		numstr++;
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
