/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 06:41:07 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 06:51:09 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, const char *src, int c){
	
	int length_dest = 0;
	while(dest[length_dest]){
		length_dest++;
	}
	for (int i = length_dest, j = 0 ; ((j < c)&& (src[j])); i++, j++){
		dest[i] = src[j];
	}

	dest[length_dest + c] = '\0';
	return dest;
}
