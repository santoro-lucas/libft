/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/07/01 17:58:36 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
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



size_t	wordlen(const char *str, char end)
{
	int	len;

	len = 0;
	while (*str != end && *str++ != '\0')
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_counter;
	size_t	pos;
	size_t	j;
	char	**array;

	word_counter = count_words(s, c);
	array = ft_calloc(word_counter + 1, sizeof (char *));
	pos = 0;
	j = 0;
	while (word_counter--)
	{
		while (*(s + j) == c)
			j++;
		array[pos] = ft_substr(s, j, wordlen((s + j), c));
		while (*(s + j) != c)
			j++;
		pos++;
	}
	array[pos] = NULL;
	return (array);
}
