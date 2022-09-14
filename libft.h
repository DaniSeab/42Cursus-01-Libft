/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:27 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 19:05:43 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/* Parte 1 */
int				ft_isalpha(int ch);
int				ft_isdigit(int ch);
int				ft_isascii(int ch);
int				ft_isprint(int ch);
int				ft_isalnum(int ch);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
size_t			ft_strlen(const char *str);
void			*ft_memchr(const void *str, int ch, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *dest, int ch, size_t len);
char			*ft_strchr(const char *str, int ch);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strncmp(char *str1, char *str2, unsigned int n);
char			*ft_strnstr(const char	*big, const char *little, size_t n);
char			*ft_strrchr(const char *str, int ch);
int				ft_atoi(const char *str);
void			ft_bzero(void *dest, size_t len);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(char *src);
/* Parte 2 */
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif