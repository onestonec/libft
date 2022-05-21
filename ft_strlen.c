/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:57:59 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 14:00:48 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* string){
    size_t counter = 0;

    if (!string){
        return counter;
    }

    while(string[counter] != '\0')
    {
        counter++;
    }
    return counter;
}
