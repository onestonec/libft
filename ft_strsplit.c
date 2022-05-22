/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 10:09:55 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 10:39:36 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_strsplit(char const *s, char c){
	size_t 	length = ft_strlen(s);
	size_t 	subLength = 0;
	int 	stringCount = 0;
	char	**res;
	
	for(size_t i = 0; i < length - 1; i++){
		if((s[i] == c) && (s[i+1] != c)){
			stringCount++;
		}
		
	}

	printf("%d\n", stringCount);

	return res;

}
