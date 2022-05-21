/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:32:47 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 15:39:51 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
	size_t counter = 0;
	
	if((!s1) || (!s2)){
		return 0;
	}
	
	while(*s1 && *s2 && (counter < n)){
		 if (*s1 < *s2){
			return -1;
		} else if (*s1 > *s2){
			return 1;
		}
		s1++;
		s2++;
		counter++;
	}
	
	if(counter == n){
		return 0;
	}

	if(*s2){
		return -1;
	} else if(*s1){
		return 1;
	}

	return 0;
}
