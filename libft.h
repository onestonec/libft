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
char    *ft_strncpy(char *dest, const char *src, int c);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, int c);


#endif
