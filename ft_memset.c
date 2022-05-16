.//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:47:49 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/15 12:54:11 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memset(void *str, int c, size_t n){
  size_t i = 0;
  unsigned char* ptr;

  ptr = (unsigned char*)str;

  for (i = 0; i < n; i++){
	  *ptr = c;
    ptr++;
  }
 
  return str;
}
