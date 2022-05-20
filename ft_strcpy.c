/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:31:27 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/19 20:32:34 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *dest, const char *src){
	int length = 0;
    if(!dest){
        return NULL;
    }
    
    while(src[length]){
        length++;
    }

    for(int i = 0; i < length; i++){
        dest[i] = src[i];
    }
    dest[length] = '\0';
    return dest;
}
