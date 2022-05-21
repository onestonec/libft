/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:39:39 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/15 12:54:55 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}                   t_list;


void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *str, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t count);
void    *ft_memmove(void* dest, const void* src, size_t n);
void    *ft_memchr(const void* ptr, int value, size_t num);
int     ft_memcmp(const void *str1, const void *str2, size_t n);

size_t	ft_strlen(const char* string);
char    *ft_strdup(const char *str1);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char* dest, const char *src, size_t c);

char    *ft_strchr(const char *src, int c);
char    *ft_strrchr(const char *src, int c);
char    *strstr(const char *haystack, const char *needle);
char    *strnstr(const char*haystack, const char *needle, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

int     ft_atoi(const char *nptr);

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_iswhitespace(int c);

int ft_printf(const char* format, ...);

#endif
