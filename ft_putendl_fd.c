/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:48:22 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 16:56:15 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd){
        if(!s){
                return;
        }

        size_t length = ft_strlen(s);
        char *temp = (char *)(malloc(sizeof(char) * (length + 2)));

	for(size_t i = 0; i < length; i++){
		temp[i] = s[i];
	}
	temp[length] = '\n';
	temp[length + 1] = '\0';
	write(fd, temp, length + 2);
}
