/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/30 17:57:58 by lusantor         ###   ########.fr       */
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
	const char	**pointer_site;

	pointer_buffer = 0;
	word_counter = count_words(s, c);
	printf("%li words\n\n", word_counter);
	pointer_site = ft_calloc(word_counter + 1, sizeof (char *));
	if (pointer_site)
	while (*s == c)
		s++;
	// while (pointer_buffer < word_counter)
	while (ft_strchr(s, c))
	{
		pointer_site = &s;
		printf("%s\n", *pointer_site);
		pointer_site++;
		s = ft_strchr(s, c);
		pointer_buffer++;
		while (*s == c)
			s++;
	}
	return ((char **)s + c); // Absurd return just for the program to compile
}

int	main(void)
{
	ft_split("    Ei, aqui   esta    eh uma frase    a ser     separada    aqui", ' ');
}

// void test_split()
// {
// 	char *s = "Esta e uma frase a ser separada"
// 	char **each_word = ft_split(s, ' ');
// 	while (i++ < 7)
// 		printf("%s\n", each_word[i]);
// 	return (0);
// }
