/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/07/01 06:33:19 by lusantor         ###   ########.fr       */
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

static char	*trim_wrapper(const char *s, char c)
{
	char	set[2];
	char	*trimmed;
	
	set[0] = c;
	set[1] = '\0';
	trimmed = ft_strtrim(s, set);
	return (trimmed);
}

// static char *rm_dup_delim(const char *s, char c)
// {
// 	char	*new_s;
// 	char	*s_trim;
// 	size_t	size;
// 	size_t	buffer;
// 	size_t	offset;
	
// 	s_trim = trim_wrapper(s, c);
// 	size = ft_strlen(s) + 1;
// 	while (*(s_trim + buffer) != '\0')
// 	{
// 		if(*(s_trim + buffer) == c && *(s_trim + buffer - 1) == c)
// 			size--;
// 		buffer++;
// 	}
// 	buffer = 0;
// 	new_s = malloc(size);
// 	while (*(s_trim + buffer) != '\0')
// 	{
// 		if(*(s_trim + buffer) != c || (*(s_trim + buffer) == c && *((s_trim + buffer) - 1) != c))
// 		{
// 			*(new_s + offset) = *(s_trim + buffer);
// 			offset++;
// 		}
// 		buffer++;
// 	}
// 	free(s_trim);
// 	return(new_s);
// }

char	**ft_split(char const *s, char c)
{
	size_t	word_counter;
	size_t	pos;
	char	*s_trim;
	char	**array;

	word_counter = count_words(s, c);
	s_trim = trim_wrapper(s, c);
	// s_trim = rm_dup_delim(s, c);
	array = calloc(word_counter + 1, sizeof (char *));
	pos = 0;
	while (word_counter--)
	{
		while (*s_trim == c)
			*s_trim++ = '\0';
		array[pos++] = s_trim;
		if (ft_strchr(s_trim, c))
			s_trim = ft_strchr(s_trim, c);
	}
	return ((char **) array);
}

// Backup of last method in case something goes south
// char	**ft_split(char const *s, char c)
// {
// 	size_t	word_counter;
// 	size_t	pos;
// 	char	*s_copy;
// 	char	**array;
// 	char	set[2];

// 	word_counter = count_words(s, c);
// 	pos = 0;
// 	set[0] = c;
// 	set[1] = '\0';
// 	// s_copy = malloc((ft_strlen(s) + 1) * sizeof (char));
// 	s_copy = ft_strtrim(s, set);
// 	array = malloc((word_counter + 1) * sizeof (char *));
// 	// ft_strlcpy(s_copy, s, ft_strlen(s) + 1);
// 	while (word_counter--)
// 	// while (*s_copy)
// 	{
// 		while (*s_copy == c)
// 			*s_copy++ = '\0';
// 		array[pos++] = s_copy;
// 		if (ft_strchr(s_copy, c))
// 			s_copy = ft_strchr(s_copy, c);
// 		while (*s_copy == c)
// 			*s_copy++ = '\0';
// 	}
// 	return ((char **) array);
// }