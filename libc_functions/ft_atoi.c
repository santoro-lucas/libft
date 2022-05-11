/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:23:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/11 21:23:46 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

char	*ignorespaces(const char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int sign;

	i = 0;
	sign = 1;
	nptr = ignorespaces(nptr);
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		i = i * 10;
		i = i + (*nptr - 48);
		nptr++;
	}
	i = i * sign;
	return(i);
}
