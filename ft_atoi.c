/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:23:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/25 18:28:46 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	char	jumpable[6];
	size_t	i;
	
	ft_memcpy(jumpable," \t\n\v\r\f",7);
	i = 0;
	while(i < 6)
	{
		if (c == jumpable[i])
			return (1);
		i++;
	}
	return (0);
}


int	ft_atoi(const char *nptr)
{
	int		num;
	char	sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*nptr) && *nptr != '\0')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	if (!ft_isdigit(*nptr))
		return (0);
	while (ft_isdigit(*nptr))
	{
		num *= 10;
		num += (*nptr - '0');
		nptr++;
	}
	num *= sign;
	return (num);
}
