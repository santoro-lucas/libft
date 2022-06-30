/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/30 22:27:19 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	count_words(char const *s, char c)
// {
// 	size_t	count;

// 	count = 0;
// 	while (*s == c)
// 		s++;
// 	while (ft_strchr(s, c))
// 	{
// 		count++;
// 		if (ft_strchr(s, c))
// 			s = ft_strchr(s, c);
// 		while (*s == c && *s != '\0')
// 			s++;
// 	}
// 	return (count);
// }

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if(*s != c && (count == 0 || *(s - 1) == c))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_counter;
	size_t	pos;
	char	*s_copy;
	char	**array;

	word_counter = count_words(s, c);
	printf("%li words\n\n", word_counter);
	pos = 0;
	s_copy = malloc((ft_strlen(s) + 1) * sizeof (char));
	array = malloc((word_counter + 1) * sizeof (char *));
	ft_strlcpy(s_copy, s, ft_strlen(s) + 1);
	while (word_counter--)
	{
		while (*s_copy == c)
			*s_copy++ = '\0';
		array[pos++] = s_copy;
		if (ft_strchr(s_copy, c))
			s_copy = ft_strchr(s_copy, c);
	}
	return ((char **) array);
}

int	main(void)
{
	char	**coiso;
	size_t	tal;

	tal = 0;
	coiso = ft_split("Essa aqui    eh uma frase   pra separar", ' ');
	while (coiso[tal])
		printf("return: %s\n", coiso[tal++]);
	return (0);
}
