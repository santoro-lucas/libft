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
		if (*s != c && (count == 0 || *(s - 1) == c))
			count++;
		s++;
	}
	return (count);
}

static size_t	wordlen(const char *str, char end)
{
	int	len;

	len = 0;
	while (*str != end && *str++ != '\0')
		len++;
	return (len);
}

void	free_all(char **word_list)
{
	while (*word_list)
	{
		free(*word_list);
		word_list++;
	}
	free(word_list);
}

char	**ft_split(char const *s, char c)
{
	char	**word_list;
	size_t	word_counter;
	size_t	index;
	size_t	pos;

	if (s == NULL)
		return (0);
	word_counter = count_words(s, c);
	word_list = ft_calloc(word_counter + 1, sizeof (char *));
	if (!word_list)
		return (NULL);
	index = 0;
	pos = 0;
	while (word_counter--)
	{
		while (*(s + pos) == c && *(s + pos) != '\0')
			pos++;
		word_list[index] = ft_substr(s, pos, wordlen((s + pos), c));
		if (!word_list[index])
			free_all(word_list);
		while (*(s + pos) != c && *(s + pos) != '\0')
			pos++;
		index++;
	}
	return (word_list);
}
