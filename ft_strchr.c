/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:42:14 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 12:51:26 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *src, int c){
	char *ptr = (char *)src;
	while((*ptr) && (*ptr != c)){
		ptr++;
	}
	
	if(*ptr == c)
	{
		return ptr;
	} 
	return NULL;
}
