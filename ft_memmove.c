/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:39:26 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/15 20:11:33 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void* dest, const void* src, size_t n){
	unsigned char* d1 = dest;
	const unsigned char *s1 = src;
	
	if(s1 < d1){
		for (s1 += n, d1 += n; n > 0; n--){
			*d1 = *s1;
			d1--;
			s1--;
		}
	} else {
		for(size_t i = 0; i < n; i++){
		*d1 = *s1;
		d1++;
		s1++;
		}
	}
	return dest;
}
