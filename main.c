#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	char	*cont_one;
	char	*cont_two;
	char 	*cont_three;

	cont_one = ft_strdup("This litle list of mine");
	cont_two = ft_strdup("it's not much, but it's mine");
	cont_three = ft_strdup("I care for it");
	first = ft_lstnew(cont_one);
	second = ft_lstnew(cont_two);
	third = ft_lstnew(cont_three);
	printf("%s\n", (char *) first->content);
	printf("%s\n", (char *) second->content);
	printf("%s\n", (char *) third->content);
	return (0);
}
