/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:31:34 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/21 20:33:43 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
        size_t length = ft_strlen(s);
        char *res = (char *)(malloc(sizeof(char) * (length + 1)));
        if(!res || !s){
                return NULL;
        }
        for(size_t i = 0; i < length; i++){
                res[i] = f(i, s[i]);
        }
        return res;

}
