/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:39 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/09 18:06:33 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
// ft_calloc
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
// ft_itoa
// ft_memchr
// ft_memcmp
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
// ft_memmove
// ft_memset
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
// ft_strchr
char	*ft_strdup(char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
// ft_strlcat
// ft_strlcpy
size_t ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// ft_strncmp
// ft_strnstr
// ft_strrchr
// ft_strtrim
// ft_substr
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
