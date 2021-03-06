/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:02:48 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 20:06:36 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void(*f)(char *)){
	char *ptr = s;
	if(!s && !f){
		return;
	}
		
	while(*ptr){
		(f)(ptr);
		ptr++;
	}
}
