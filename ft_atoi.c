/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:23:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/12 22:15:12 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int	num;
	char sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ')
		nptr++;		
	if (*nptr == '-' || *nptr == '+')
	{
		if(*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		num *= 10;
		num += (*nptr - '0');
		nptr++;
	}
	num = num * sign;
	return(num);
}

#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_atoi("-987987"));
	return (0);
}