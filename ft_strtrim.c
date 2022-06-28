/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:39:02 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/26 23:39:09 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether c is present in *set
//static int	ft_isinset(char c, const char *set)
//{
//	while (*set != '\0')
//	{
//		if (c == *set)
//			return (1);
//		else
//			set++;
//	}
//	return (0);
//}

//char	*ft_strtrim(const char *s1, const char *set)
//{
//	char	*s2;
//	int		end;
//
//	while (ft_isinset(*s1, set))
//		s1++;
//	end = ft_strlen(s1) - 1;
//	while (ft_isinset(s1[end], set))
//		end--;
//	s2 = malloc(end + 2);
//	ft_strlcpy(s2, s1, end + 2);
//	return (s2);
//}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	end;

	while (ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + end)))
		end--;
	s2 = malloc(end + 2);
	ft_strlcpy(s2, s1, end + 2);
	return (s2);
}
