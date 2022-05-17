/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:47:13 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/16 20:50:51 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void* ptr, int value, size_t num){
	const unsigned char* p1 = (unsigned char*) ptr;
	for(size_t i = 0; i < num; i++){
		if(*p1 == value){
			return p1;
		} else {
			p1++;
		}
	}
}
