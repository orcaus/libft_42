/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:51:12 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:51:13 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_bzero(void *s, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *p, int ch);
char *ft_strdup(const char *s);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *p, int ch);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char **ft_split(char const *s, char c);
size_t ft_strlcat(char *  dest, const char *  src, size_t  count);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);

#endif
