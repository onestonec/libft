/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:40:44 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 15:06:22 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2){
	if((!s1) || (!s2)){
		return 0;
	}
	
	while(*s1 && *s2){
		 if (*s1 < *s2){
			return -1;
		} else if (*s1 > *s2){
			return 1;
		}
		s1++;
		s2++;
	}
	
	if(*s2){
		return -1;
	} else if(*s1){
		return 1;
	}

	return 0;
}
