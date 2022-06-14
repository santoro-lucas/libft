/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:39 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/14 22:30:17 by lusantor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// ft_strlcat
int	ft_tolower(int c);
int	ft_toupper(int c);
// 	ft_strchr
// 	ft_strrchr
// 	ft_strncmp
// 	ft_memchr
// 	ft_memcmp
// 	ft_strnstr
int	ft_atoi(const char *nptr);
// 	ft_calloc
char	*ft_strdup(char *s);

// 		ft_substr
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const  char *set);
// 		ft_split
// 		ft_strmapi
// 		ft_itoa
// 		striteri
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
