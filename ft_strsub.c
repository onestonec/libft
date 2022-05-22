/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 09:19:56 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 09:32:06 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len){
	size_t checkLength = ft_strlen(s);
	char *res = (char *)(malloc(sizeof(char) * (len + 1 )));
	if((!res) || (start+len > checkLength)){
		return NULL;
	}
	for(size_t i = 0; i < len ; i++){
		res[i] = s[i + start];
	}
	return res;
}
