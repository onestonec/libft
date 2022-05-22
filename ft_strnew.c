/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:20:54 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 18:36:11 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size){
	char *res = (char *)(malloc(sizeof(char) * (size + 1)));
	if(!res){
		return NULL;
	}

	ft_memset(res, 0, size);

	return res;
}
