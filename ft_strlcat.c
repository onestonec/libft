/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 07:02:43 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 07:19:37 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char* dest, const char *src, size_t c){

		const size_t srclen = ft_strlen(src);
    	const size_t dstlen = strnlen(dest, c);
    	if (dstlen == c){
			return c + srclen;
		}
    	if (srclen < c - dstlen) {
        	ft_memcpy(dest+dstlen, src, srclen + 1);
    	} else {
        	ft_memcpy(dest+dstlen, src, c - 1);
        	dest[dstlen + c - 1] = '\0';
    	}
    	return dstlen + srclen;
}
