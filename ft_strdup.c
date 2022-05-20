/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:02:59 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/19 20:11:57 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str1){
	int length = 0;
	const char *mover = str1;
	while(*mover){
		length++;
		mover++;
	}
	mover = str1;
	char *new_str = (char *)(malloc((length + 1) *sizeof(char)));
	for(int i = 0; i < length; i++){
		new_str[i] = *mover;
		mover++;
	}
	new_str[length] = '\0';

	return new_str;
}
