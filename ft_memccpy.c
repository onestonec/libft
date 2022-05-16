/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:53:27 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/15 17:41:12 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n){
	unsigned char *d1 = dest;
	const unsigned char *s1 = src;

	for (unsigned int i = 0; i < n; i++){
		*d1 = *s1;
		if(*s1 == c){
			return ((char *)dest + i + 1);
		}
		d1++;
		s1++;
	}

	return NULL;
}
