/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 09:34:17 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 09:38:46 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2){
	size_t s1Length = ft_strlen(s1);
	size_t s2Length = ft_strlen(s2);
	char *res = (char *)(malloc(sizeof(char) * (s1Length + s2Length + 1)));
	
	if((!s1) || (!s2) || (!res)){
		return NULL;
	}
	for (size_t i = 0; i < s1Length; i++){
		res[i] = s1[i];
	}
	for(size_t i = 0; i < s2Length; i++){
		res[i + s1Length] = s2[i];
	}
	res[s1Length + s2Length] = '\0';
	return res;	
}
