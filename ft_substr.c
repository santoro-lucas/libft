/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:44:08 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/26 22:43:33 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	s += start;
	if (len > (ft_strlen(s)))
		len = ft_strlen(s);
	substr = malloc(len + 1);
	ft_strlcpy(substr, s, len + 1);
	return (substr);
}
