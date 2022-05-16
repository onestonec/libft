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
	for (unsigned int i = 0; i < n; i++){
		*d1 = *s1;
		d1++;
		s1++;
	}
	return dest;
}
