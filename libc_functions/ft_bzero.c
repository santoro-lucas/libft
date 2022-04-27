void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		*(char *)s = '\0';
		s++;
		i++;
	}
}
