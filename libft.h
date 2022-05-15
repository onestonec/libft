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

#include <stdio.h>

size_t	ft_strlen(const char* string);
void* ft_memset(void *str, int c, size_t n);
void ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);

#endif
