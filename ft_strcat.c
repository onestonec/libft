/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:40:53 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/20 20:48:55 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src){
	int length_dest = 0;
	int length_src = 0;
	while(dest[length_dest]){
		length_dest++;
	}
	while(src[length_src]){
		length_src++;
	}

	for (int i = length_dest, j = 0 ; j < length_src; i++, j++){
		dest[i] = src[j];
	}

	dest[length_dest + length_src] = '\0';
	return dest;

}
