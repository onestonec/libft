/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:34:29 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 20:42:59 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strequ(char const *s1, char const *s2){
	size_t s1Length = ft_strlen(s1);
	size_t s2Length = ft_strlen(s2);

	if((s1Length != s2Length) || (!s1) || (!s2)){
		return 0;
	}

	for(size_t i = 0; i < s1Length; i++){
		if(s1[i] != s2[i]){
			return 0;
		}
	}
	return 1;
}
