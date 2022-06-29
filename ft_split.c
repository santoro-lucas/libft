/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:46 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/29 23:05:04 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char phrase[1][7];

	phrase [0][0] = *s;
	// while (*(phrase + i) != '\0')
	// {
	// 	if (*(phrase + i) == c)
	// 	{
	// 		*(phrase + i) = '\0';
	// 		j++;
	// 	}
	// 	i++;
	// }
	printf("%c\n", phrase[0][0]);
	printf("%c\n", phrase[0][1]);
	printf("%c\n", phrase[0][2]);
	printf("%c\n", phrase[1][0]);
	return ((char **)s + c);
}

// void test_split()
// {
// 	char *s = "Esta e uma frase a ser separada"
// 	char **each_word = ft_split(s, ' ');
// 	while (i++ < 7)
// 		printf("%s\n", each_word[i]);
// 	return (0);
// }

int	main(void)
{
	ft_split("Esta e uma frase a ser separada", ' ');
}