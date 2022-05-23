/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:57:06 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/23 22:48:47 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *s)
{
	char	*dup;
	int		len;

	len = ft_strlen(s);
	dup = malloc(len * sizeof(char) + 1);
	while (*s != '\0')
		*dup++ = *s++;
	*dup = '\0';
	dup -= len;
	return (dup);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strdup("Hello, World!"));
// 	return (0);
// }