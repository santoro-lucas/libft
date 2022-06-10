/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusantor <lusantor@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:39 by lusantor          #+#    #+#             */
/*   Updated: 2022/06/10 21:19:28 by lusantor         ###   ########.fr       */
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
// ft_memset
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
// ft_memmove
// ft_strlcat
// ft_strlcpy
int	ft_tolower(int c);
int	ft_toupper(int c);
// 	ft_strchr
// 	ft_strrchr
// 	ft_strncmp
// 	ft_memchr
// 	ft_memcmp
// 	ft_strnstr
// 	ft_calloc
char	*ft_strdup(char *s);
// 		ft_itoa
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
// 		ft_split
// 		striteri
char	*ft_strjoin(char const *s1, char const *s2);
// 		ft_strmapi
int	ft_atoi(const char *nptr);
char	*ft_strtrim(const char *s1, const  char *set);
// 		ft_substr

#endif
