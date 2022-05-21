/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 08:58:09 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 11:59:24 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr){
    	size_t i = 0;
	int sign = 1;
	int result = 0;
		
	while(ft_iswhitespace(nptr[i])){
		i++;		
	}
	
	if(nptr[i] == '-'){
		sign = -1;
		i++;
	} else if (nptr[i] == '+'){
		sign = 1;
		i++;
	}
	
	while(ft_isdigit(nptr[i])){
		result = result*10 + (nptr[i] - 48); 
		i++;
	}

	return result*sign;
}
