/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:39:02 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/09 17:43:04 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether c is present in *set
static int ft_isinset(char c, const char *set)
{
	while(*set != '\0')
	{
		if (c == *set)
			return  (1);
		else
			set++;
	}
	return (0);
}

// Ignores characters in set, 
// measures the remainder with strlen
// then comes backwards counting characters in set
// finally copies
char *ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int		end;
	int		pos;

	while (ft_isinset(*s1, set))
		s1++;
	end = ft_strlen(s1) - 1;
	while (ft_isinset(s1[end], set))
		end--;
	s2 = malloc(end * sizeof(char) + 2);
	pos = 0;
	while (pos <= end)
	{
		s2[pos] = s1[pos];
		pos++;
	}
	s2[pos] = '\0';
	return (s2);
}
