/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:21:32 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 14:08:05 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle){
	size_t 	lengthNeedle = ft_strlen(needle);
	char 	*ptrHaystack = (char *)haystack;
	char 	*ptrNeedle   = (char *)needle;

	if(!needle){
		return NULL;
	}

	while(*ptrHaystack){
		while((*ptrHaystack == *ptrNeedle) && (*ptrNeedle)){
			ptrHaystack++;
			ptrNeedle++;
		}
		if (*ptrNeedle == '\0'){
			return (ptrHaystack - lengthNeedle);
		}
		ptrNeedle = (char *)needle;
		ptrHaystack++;
	}
	return NULL;
}