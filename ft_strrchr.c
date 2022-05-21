/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:00:16 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 13:13:43 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *src, int c){
	size_t	length = ft_strlen(src);
	size_t	i = length - 1;
	char	*ptr = (char *)(src + i);
	while(ptr >=src){
		if(*ptr == c){
			return ptr;		
		}
		ptr--;
	}

	return NULL;
}
