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

size_t  ft_strlcat(char* dest, const char *src, size_t n){

		const size_t srclen = ft_strlen(src);
    	const size_t dstlen = strnlen(dest, n);
    	if (dstlen == n){
			return n + srclen;
		}
    	if (srclen < n - dstlen) {
        	ft_memcpy(dest+dstlen, src, srclen + 1);
    	} else {
        	ft_memcpy(dest+dstlen, src, n - 1);
        	dest[dstlen + n - 1] = '\0';
    	}
    	return dstlen + srclen;
}
