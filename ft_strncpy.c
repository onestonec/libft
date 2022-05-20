/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:00:47 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/19 21:01:49 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, int c){
	int length = 0;
    if(!dest){
        return NULL;
    }

    for(int i = 0; i < c; i++){
        dest[i] = src[i];
    }
    dest[c] = '\0';
    return dest;
}
