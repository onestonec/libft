/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:07:48 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/15 15:13:37 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n){
	char* d1 = dest;
	const char* s1 = src;
	
	for(size_t i = 0; i < n; i++){
		*d1 = *s1;
		d1++;
		s1++;
		
	}
	return dest;
}
