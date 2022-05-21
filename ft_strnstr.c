/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:28:51 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 14:33:11 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n){
	size_t 	lengthNeedle = ft_strlen(needle);
	char 	*ptrHaystack = (char *)haystack;
	char 	*ptrNeedle   = (char *)needle;
	size_t 	counter = 0;

	if(!needle){
		return NULL;
	}

	while((*ptrHaystack) && (counter < n)){
		while((*ptrHaystack == *ptrNeedle) && (*ptrNeedle)){
			ptrHaystack++;
			ptrNeedle++;
		}
		if (*ptrNeedle == '\0'){
			return (ptrHaystack - lengthNeedle);
		}
		counter++;
		ptrNeedle = (char *)needle;
		ptrHaystack++;
	}
	return NULL;
}
