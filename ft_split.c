/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/30 21:23:21 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c)
		s++;
	while (ft_strchr(s, c))
	{
		count++;
		if (ft_strchr(s, c))
			s = ft_strchr(s, c);
		while (*s == c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_counter;
	size_t	pointer_buffer;
	char	*s_copy;
	char	**pointer_site;

	word_counter = count_words(s, c);
	printf("%li words\n\n", word_counter);
	pointer_buffer = 0;
	s_copy = malloc((ft_strlen(s) + 1) * sizeof (char));
	pointer_site = malloc((word_counter + 1) * sizeof (char *));
	ft_strlcpy(s_copy, s, ft_strlen(s) + 1);
	while (ft_strchr(s_copy, c))
	{
		while (*s_copy == c)
			s_copy++;
		pointer_site = &s_copy;
		printf("%li\t%s\n", pointer_buffer, *pointer_site);
		pointer_site++;
		pointer_buffer++;
		if (ft_strchr(s_copy, c))
			s_copy = ft_strchr(s_copy, c);
	}
	return ((char **) pointer_site);
}

int	main(void)
{
	char	**coiso;

	coiso = ft_split("  Essa aqui    eh uma frase   pra separar   ", ' ');
	printf("return: %s\n", *coiso);
	return (0);
}
