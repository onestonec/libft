/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:15:11 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 20:18:11 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *)){
	if(!s && !f){
		return;
	}

	size_t length = ft_strlen(s);

	for(size_t i = 0; i < length; i++){
		f(i, &s[i]);
	}
}
