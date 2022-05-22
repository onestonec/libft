/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:19:07 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 20:25:13 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char)){
	size_t length = ft_strlen(s);
	char *res = (char *)(malloc(sizeof(char) * (length + 1)));
	if(!res || !s){
		return NULL;
	}
	for(size_t i = 0; i < length; i++){
		res[i] = f(s[i]);
	}
	return res;

}
