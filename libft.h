/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:01:49 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/27 11:44:57 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char		*ft_strnew(size_t size);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int num);
char		*ft_strrev(char *str);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strcat(char *restrict dest, const char *restrict src);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
char		*ft_strncat(char *restrict dest,
			const char *restrict src, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strnstr(const char *hay, const char *needle, size_t n);
char		*ft_strrchr(const char *str, int c);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		*ft_strstr(const char *hay, const char *needle);
char		**ft_strsplit(char const *s, char c);
int			ft_atoi(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
size_t		ft_strlcat(char *restrict dest, const char *restrict src, size_t n);
size_t		ft_strlen(const char *str);
void		ft_bzero(void *str, size_t n);
void		*ft_memccpy(void *restrict dest,
			const void *restrict str, char c, size_t n);
void		ft_putchar(char c);
void		ft_strclr(char *s);
void		ft_putnbr(int nb);
void		ft_putendl(char const *s);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(char const *str);
void		*ft_memalloc(size_t size);
void		*ft_memchr(const void *src, int c, size_t n);
void		*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t size);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
