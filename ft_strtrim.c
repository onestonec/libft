/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 09:58:31 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 10:06:58 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s){
	size_t sLength = ft_strlen(s);
	size_t counter = 0;
	size_t resLength;
	char *res;

	if(!s){
		return NULL;
	}
	for(size_t i = 0; i < sLength; i++){
		if(ft_iswhitespace(s[i])){
			counter++;
		}
	}
	resLength = sLength - counter + 1;
	
	res = (char *)(malloc(sizeof(char) * (resLength)));
	if(!res){
		return NULL;
	}	
	for(size_t i = 0, j = 0; i < sLength; i++){
		if(!ft_iswhitespace(s[i])){
			res[j] = s[i];
			j++;
		}
	}
	res[resLength] = '\0';
	return res;
}
