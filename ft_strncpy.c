/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:00:47 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 12:38:45 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n){
	int length = 0;
    if(!dest){
        return NULL;
    }

    for(int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    dest[n] = '\0';
    return dest;
}
