/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:36:23 by lusantor          #+#    #+#             */
/*   Updated: 2022/05/26 23:36:24 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *str);

void	copy_each(char const **origin, char **dest)
{
	while (**origin != '\0')
	{
		**dest = **origin;
		(*origin)++;
		(*dest)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;

	size = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(size) + 1;
	copy_each(&s1, &str);
	copy_each(&s2, &str);
	*str = '\0';
	str = str - size;
	return (str);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strjoin("This is one string-", "-and this is another."));
	return (0);
}
